# Aquatic Frontier Exploration

ROS 2 workspace for underwater cave-exploration simulation, Xbox teleoperation, and autonomous waypoint following with the Mini-Alpha AUV in the [Stonefish](https://github.com/patrykcieslak/stonefish) simulator.

This repository builds and runs on **Ubuntu 24.04** with **ROS 2 Jazzy**. The `build/` and `install/` trees checked into the repository were produced on another machine with ROS 2 Humble (`/home/arc/ws_sf_ros2`). They do not run on Jazzy. Delete them and rebuild, as described below.

The scenario that contains the Mini-Alpha vehicle is `src/world_of_stonefish/world/mini_alpha_world.scn`. `ros2 launch mini_alpha_bringup bringup_simulation.launch.py` does not start that world: `src/mini_alpha/mini_alpha_bringup/launch/include/simulation.launch.py` points at `flat_world.scn`, and that file is not in the repository. Use the `ros2 run` command in [Run the simulation](#run-the-simulation).

## What you can do

- Simulate Mini-Alpha, including IMU, pressure, DVL, forward-looking sonar, sidescan sonar, multibeam, and cameras.
- Drive the four thrusters with a `Float64MultiArray` command.
- Run the waypoint follower, which reads `/mini_alpha/odometry` and publishes thruster commands.
- Teleoperate with an Xbox controller through `xbox_teleop_mini_alpha64.py`.

## Requirements

- Ubuntu 24.04 (x86_64)
- ROS 2 Jazzy (`ros-jazzy-ros-base` and the packages listed below)
- GCC and G++. Stonefish and the ROS packages link against libstdc++. If `/usr/bin/c++` is Clang, CMake fails with `cannot find -lstdc++`.
- A display with OpenGL 4.5. The forward-looking sonar is not supported by `stonefish_simulator_nogpu` (the parser reports `FLS not supported in console mode!` and the process exits). Mesa llvmpipe is enough when no GPU is available.
- Git, CMake, and colcon
- Several gigabytes of free disk space. `mvp_control` downloads osqp, osqp-cpp, abseil, and googletest during the build.
- Enough memory for that FetchContent build. On a machine with about 5 GB of free RAM, add an 8 GB swap file and build with the low-parallelism flags in [Build the workspace](#build-the-workspace).

## Repository layout

```text
AquaticFrontierExploration/
├── xbox_teleop_mini_alpha64.py          # Xbox -> thruster commands
└── src/
    ├── mini_alpha/
    │   ├── mini_alpha_bringup/          # launch files and sim parameters
    │   ├── mini_alpha_description/
    │   └── mini_alpha_config/
    ├── mini_alpha_waypoint_follower/    # autonomous waypoint node
    ├── world_of_stonefish/              # scenarios, vehicle models, sensor drivers
    ├── mvp_control/                     # control stack (heavy C++ build)
    ├── mvp_mission/                     # mission behaviors
    ├── mvp_msgs/
    ├── mvp_utilities/
    ├── acomms_msgs/
    └── stonefish_ros2/                  # not in git; clone it during setup
```

`src/stonefish_ros2/` is listed in `.gitignore`. Clone the pinned revision yourself. `build/`, `install/`, and `log/` are colcon output.

## 1. Clone this repository

```bash
git clone https://github.com/gregorysantosa/AquaticFrontierExploration.git
cd AquaticFrontierExploration
```

The rest of this guide assumes your shell is in that directory. Call it the workspace root.

## 2. Install ROS 2 Jazzy and system packages

Follow the official [ROS 2 Jazzy Ubuntu install](https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html) through the apt-source and `ros-jazzy-ros-base` steps, then install the libraries this workspace needs:

```bash
sudo apt-get update
sudo apt-get install -y \
  build-essential gcc g++ cmake git pkg-config \
  python3-colcon-common-extensions python3-rosdep \
  python3-opencv python3-numpy \
  libglm-dev libsdl2-dev libfreetype6-dev \
  libeigen3-dev libboost-all-dev libgsl-dev \
  libgeographiclib-dev libyaml-cpp-dev libpcl-dev libomp-dev \
  mesa-utils libgl1-mesa-dev libglu1-mesa-dev xvfb \
  ros-jazzy-ros-base ros-jazzy-rviz2 ros-jazzy-robot-localization \
  ros-jazzy-foxglove-bridge ros-jazzy-joy ros-jazzy-cv-bridge \
  ros-jazzy-geographic-msgs ros-jazzy-tf2-eigen ros-jazzy-tf2-geometry-msgs \
  ros-jazzy-pluginlib ros-jazzy-xacro ros-jazzy-pcl-conversions \
  ros-jazzy-pcl-ros ros-jazzy-image-transport ros-jazzy-launch-xml \
  ros-jazzy-ament-cmake-gtest
```

The geographic package name is `libgeographiclib-dev`. `libgeographic-dev` is not the package to install.

Initialize rosdep once per machine:

```bash
sudo rosdep init
rosdep update
```

Skip `rosdep init` if `/etc/ros/rosdep/sources.list.d/20-default.list` already exists. `rosdep update` is still required.

## 3. Point the C and C++ compilers at GCC

Check the compilers CMake will pick up:

```bash
c++ --version
cc --version
```

Both should report GCC. If either reports Clang, switch the Debian alternatives (paths below are the Ubuntu 24.04 GCC 13 binaries):

```bash
sudo update-alternatives --set cc /usr/bin/gcc
sudo update-alternatives --set c++ /usr/bin/g++
```

Keep these exports in the shell you use for the Stonefish and colcon builds:

```bash
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++
```

## 4. Build and install the Stonefish library

`stonefish_ros2` at the revision below requires Stonefish 1.6.0. This commit is the 1.5/1.6 line that matches the ROS 2 package used here:

```bash
STONEFISH_SHA=09208f913daf688cc8abc775d45742c860c81f19
sudo mkdir -p /opt/stonefish
sudo chown "$(id -u):$(id -g)" /opt/stonefish
git clone https://github.com/patrykcieslak/stonefish.git /opt/stonefish
git -C /opt/stonefish checkout "${STONEFISH_SHA}"

cmake -S /opt/stonefish -B /opt/stonefish/build \
  -DCMAKE_BUILD_TYPE=Release \
  -DBUILD_TESTS=OFF \
  -DCMAKE_C_COMPILER=/usr/bin/gcc \
  -DCMAKE_CXX_COMPILER=/usr/bin/g++
cmake --build /opt/stonefish/build
sudo cmake --install /opt/stonefish/build
```

Confirm the install exported a CMake package:

```bash
ls /usr/local/lib/cmake/Stonefish/StonefishConfig.cmake \
   /usr/local/share/Stonefish/cmake/StonefishConfig.cmake
```

One of those two paths is enough. `sudo ldconfig` if a later configure step cannot find `libstonefish.so`.

## 5. Clone stonefish_ros2

Package version 1.6.0, pinned to the commit that builds against the Stonefish library above:

```bash
STONEFISH_ROS2_SHA=6646e7ac25eed982f37f807abc7b545dbd2d6648
git clone https://github.com/patrykcieslak/stonefish_ros2.git src/stonefish_ros2
git -C src/stonefish_ros2 checkout "${STONEFISH_ROS2_SHA}"
```

## 6. Drop a Humble install from another machine

If `install/setup.bash` chains `/opt/ros/humble`, colcon will keep using that prefix. Remove it before the Jazzy build:

```bash
if [[ -f install/setup.bash ]] && grep -q '/opt/ros/humble' install/setup.bash; then
  rm -rf build install log
fi
```

## 7. Install ROS dependencies

Two rosdep keys in this tree do not resolve, and both are safe to skip:

- `pcl` has no rosdep key. `libpcl-dev` from apt provides the headers.
- `roslaunch_manager/package.xml` depends on `roslaunch_manager_msgs`. That package does not exist. The interfaces package in the tree is `roslaunch_manager_interfaces`, which is what the Python code imports.

```bash
source /opt/ros/jazzy/setup.bash
rosdep install --from-paths src --ignore-src -y \
  --skip-keys "roslaunch_manager_msgs pcl"
```

## 8. Build the workspace

```bash
source /opt/ros/jazzy/setup.bash
export CC=/usr/bin/gcc
export CXX=/usr/bin/g++

# Lower these if the machine has more free RAM.
export CMAKE_BUILD_PARALLEL_LEVEL=2
export MAKEFLAGS=-j2

colcon build --symlink-install --parallel-workers 1 \
  --cmake-args -DCMAKE_BUILD_TYPE=Release
```

A full build produces 25 packages. The first build is dominated by `mvp_control` and its downloaded dependencies. Later builds are incremental.

If the compiler or linker is killed with no error, the machine ran out of memory. Add swap and rerun the same `colcon build` command:

```bash
sudo fallocate -l 8G /swapfile
sudo chmod 600 /swapfile
sudo mkswap /swapfile
sudo swapon /swapfile
```

## 9. Source the workspace

Every new terminal needs both setups, the same domain id, and the default Jazzy middleware. `RMW_IMPLEMENTATION` left over from another distro will hide topics from the rest of the graph.

```bash
export ROS_DOMAIN_ID=4
unset RMW_IMPLEMENTATION
source /opt/ros/jazzy/setup.bash
source install/setup.bash
```

Put that block in each terminal before any `ros2` command below. From here on, "a sourced terminal" means a terminal where this block has been run.

Check that the overlay is Jazzy and that the scenario package is visible:

```bash
echo "${ROS_DISTRO}"
ros2 pkg prefix world_of_stonefish
```

`ROS_DISTRO` should print `jazzy`.

## Run the simulation

Stonefish needs a real display. On a desktop session, `echo "${DISPLAY}"` should already be something like `:0` or `:1`.

On a machine with no GPU, force software rendering:

```bash
export LIBGL_ALWAYS_SOFTWARE=1
```

On a headless machine, start a virtual framebuffer first and point the simulator at it:

```bash
Xvfb :99 -screen 0 1280x800x24 &
export DISPLAY=:99
export LIBGL_ALWAYS_SOFTWARE=1
```

`glxinfo -B` should report OpenGL 4.5 (Mesa llvmpipe is fine).

In a sourced terminal, start the graphical simulator on the Mini-Alpha world. Arguments are the Stonefish data directory, the scenario file, the simulation rate, the window width, the window height, and the rendering quality:

```bash
DATA="$(ros2 pkg prefix world_of_stonefish)/share/world_of_stonefish/data"
SCN="$(ros2 pkg prefix world_of_stonefish)/share/world_of_stonefish/world/mini_alpha_world.scn"

ros2 run stonefish_ros2 stonefish_simulator \
  "${DATA}" "${SCN}" 100 1200 800 low
```

Wait until the log prints `Ready for running`. The Stonefish window shows the vehicle and the sonar views. The simulator also logs a parser trace to `~/.ros/log/stonefish_ros2_parser.log`.

Other scenarios live in `src/world_of_stonefish/world/` (`fls_world.scn`, `under_ice.scn`, tank worlds, and others). Mini-Alpha's vehicle definition is `src/world_of_stonefish/vehicles/mini_alpha.scn`, included by `mini_alpha_world.scn`.

### Why the bringup launch file is not the start command

`mini_alpha_bringup` includes `launch/include/simulation.launch.py`, which sets:

```python
#sim_world = 'mini_alpha_world.scn'
sim_world = 'flat_world.scn'
```

`flat_world.scn` is not in `src/world_of_stonefish/world/`, so `ros2 launch mini_alpha_bringup bringup_simulation.launch.py` cannot open the world. The direct `ros2 run` command above is the working start path. The waypoint follower and the Xbox script publish straight to the Stonefish thruster topic, so they do not need the bringup thruster driver.

When you do want the extra bringup nodes (thruster driver, IMU driver, pressure driver, Foxglove bridge, and `joy_node`), point that launch file at `mini_alpha_world.scn` first. `joy_node` also needs a joystick device at `/dev/input/js0`.

## Check that the vehicle is alive

In a second sourced terminal:

```bash
ros2 topic echo /mini_alpha/odometry --once
```

You should see a `nav_msgs/Odometry` pose. Useful topics from `vehicles/mini_alpha.scn`:

| Topic | Role |
| --- | --- |
| `/mini_alpha/odometry` | Vehicle pose |
| `/mini_alpha/stonefish/thruster_command` | Four thruster setpoints (`std_msgs/Float64MultiArray`) |
| `/mini_alpha/stonefish/thruster_state` | Thruster feedback |
| `/mini_alpha/imu/stonefish/data` | IMU |
| `/mini_alpha/pressure` | Pressure |
| `/mini_alpha/dvl/stonefish/raw` | DVL |
| `/mini_alpha/fls/stonefish/image` | Forward-looking sonar image |
| `/mini_alpha/sss/stonefish/image` | Sidescan sonar image |
| `/multibeamsonar/data` | Multibeam |
| `/mini_alpha/explorHD/image` and `/mini_alpha/usbpcb/image` | Cameras |

The thruster array is `[surge_port, surge_starboard, heave_port, heave_starboard]`.

## Autonomous waypoint following

Leave the simulator running. In another sourced terminal:

```bash
ros2 run mini_alpha_waypoint_follower waypoint_follower
```

The node logs `Waypoint follower node started`, subscribes to `/mini_alpha/odometry`, and publishes `/mini_alpha/stonefish/thruster_command`. The default path is a square that steps down in depth, defined in `src/mini_alpha_waypoint_follower/mini_alpha_waypoint_follower/waypoint_follower.py`. Edit `self.waypoints` there and rebuild (or rely on `--symlink-install` for the Python file) before starting the node again.

Do not run the waypoint follower and the Xbox script at the same time. Both publish the same thruster topic.

## Manual thruster commands

In another sourced terminal, while the simulator is running:

```bash
ros2 topic pub /mini_alpha/stonefish/thruster_command std_msgs/msg/Float64MultiArray \
  "{data: [1.0, 1.0, 0.0, 0.0]}" -r 10
```

`[1.0, 1.0, 0.0, 0.0]` commands both surge thrusters forward. Watch `/mini_alpha/odometry`: the pose should change within a few seconds. Publish zeros, or Ctrl-C the publisher, to stop.

```bash
ros2 topic pub /mini_alpha/stonefish/thruster_command std_msgs/msg/Float64MultiArray \
  "{data: [0.0, 0.0, 0.0, 0.0]}" --once
```

## Xbox teleoperation

The script at the repository root subscribes to `/joy` and publishes `/mini_alpha/stonefish/thruster_command`. Plug in the controller, then in two sourced terminals:

```bash
ls /dev/input/js*
sudo chmod a+rw /dev/input/js0
ros2 run joy joy_node --ros-args -p dev:="/dev/input/js0"
```

```bash
python3 xbox_teleop_mini_alpha64.py
```

Default axis map in the script (confirm with `ros2 topic echo /joy`):

- Left stick vertical: forward and back
- Left stick horizontal: yaw
- Right stick vertical: heave

`chmod` on `/dev/input/js0` often has to be repeated after a reboot. Joystick permissions can also be handled with a udev rule if you use the controller often.

`src/mini_alpha/readme.md` describes a different mapping used by the MVP mission teleoperation stack (`start`, `back`, `LT`, and the sticks on individual thruster topics). That path is the bringup plus mission stack, not `xbox_teleop_mini_alpha64.py`.

## Rebuild after code changes

Python nodes installed with `--symlink-install` pick up edits on the next process start. C++ changes need another build:

```bash
source /opt/ros/jazzy/setup.bash
colcon build --symlink-install --parallel-workers 1 \
  --cmake-args -DCMAKE_BUILD_TYPE=Release
```

Then open new terminals, source the workspace again, and start the simulator again. Keep `ROS_DOMAIN_ID=4` in every terminal.

## Troubleshooting

**`/usr/bin/ld: cannot find -lstdc++` during Stonefish or colcon.** `/usr/bin/c++` is Clang. Repeat [Point the C and C++ compilers at GCC](#3-point-the-c-and-c-compilers-at-gcc) and pass `-DCMAKE_C_COMPILER=/usr/bin/gcc -DCMAKE_CXX_COMPILER=/usr/bin/g++`.

**`Cannot locate rosdep definition for [pcl]`.** Install `libpcl-dev` and rerun rosdep with `--skip-keys "roslaunch_manager_msgs pcl"`.

**`rosdep` cannot find `roslaunch_manager_msgs`.** Same skip list. Do not add a package with that name; the code imports `roslaunch_manager_interfaces`.

**Simulator exits immediately, and `~/.ros/log/stonefish_ros2_parser.log` says `FLS not supported in console mode!`.** You started `stonefish_simulator_nogpu`. Use `stonefish_simulator` with a display.

**The window never appears, or OpenGL fails.** Export `DISPLAY` and `LIBGL_ALWAYS_SOFTWARE=1`. On a headless host, start `Xvfb` as shown above. `glxinfo -B` should show OpenGL 4.5 before you retry.

**Topics from the simulator are missing in another terminal.** That shell did not source `/opt/ros/jazzy/setup.bash` and `install/setup.bash`, or `ROS_DOMAIN_ID` / `RMW_IMPLEMENTATION` do not match. Source the block in [Source the workspace](#9-source-the-workspace) again.

**A second simulator is already running.** `ros2 node list` shows more than one `/stonefish_simulator`, or an old process is still publishing `/mini_alpha/odometry`. Stop the old process before starting a new one.

**The simulator window opens once, then later launches do nothing.** Close the Stonefish process, close the terminals, source the workspace again with the same `ROS_DOMAIN_ID`, and start `stonefish_simulator` once.

**Colcon configure still mentions `/opt/ros/humble`.** Remove `build/`, `install/`, and `log/`, then build again from a shell that has sourced Jazzy only.

## Tests

`imu_filter_madgwick` has gtests:

```bash
source /opt/ros/jazzy/setup.bash
source install/setup.bash
colcon test --packages-select imu_filter_madgwick --event-handlers console_direct+
colcon test-result --verbose
```

`mini_alpha_waypoint_follower` currently fails the default ament flake8 and pep257 checks (import order, line length, and docstring whitespace). Those failures are in the existing node style, not in the simulator.

## Notes and future work

- Source ROS 2 Jazzy and `install/setup.bash` in every new terminal.
- The waypoint follower and the Xbox script must not publish at the same time.
- Planned work:
  - 3D voxel-grid mapping
  - 3D A* global path planning
  - Frontier waypoint generation

## References

- The [URI Ocean Robotics Group](https://github.com/uri-ocean-robotics) repositories were used to build a significant portion of this project.
- Emir Cem Gezer's thesis informed some of the methods used here: <https://digitalcommons.uri.edu/cgi/viewcontent.cgi?article=3251&context=theses>
- Stonefish: <https://github.com/patrykcieslak/stonefish> and <https://github.com/patrykcieslak/stonefish_ros2>
