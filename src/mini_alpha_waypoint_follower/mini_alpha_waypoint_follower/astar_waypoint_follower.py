#!/usr/bin/env python3

import math
import heapq

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Point
from std_msgs.msg import Float64MultiArray


def quat_to_yaw(x, y, z, w):
    """Convert quaternion to yaw (Z-axis rotation)."""
    siny_cosp = 2.0 * (w * z + x * y)
    cosy_cosp = 1.0 - 2.0 * (y * y + z * z)
    return math.atan2(siny_cosp, cosy_cosp)


class WaypointFollower(Node):
    def __init__(self):
        super().__init__('mini_alpha_waypoint_follower')

        # --- 3D GRID CONFIG (you can change these later) ---
        # World-space bounds (meters)
        self.grid_min_x = -10.0
        self.grid_min_y = -10.0
        self.grid_min_z = -5.0
        self.grid_size_x = 20   # cells in x
        self.grid_size_y = 20   # cells in y
        self.grid_size_z = 10   # cells in z
        self.voxel_size = 1.0   # meters per voxel

        # Placeholder obstacle set (grid indices (ix, iy, iz))
        # For now: empty. Later, you can fill this from your map.
        self.obstacles = set()
        # Example: uncomment this block to create a "wall" in the middle
        # for ix in range(5, 10):
        #     for iy in range(8, 12):
        #         for iz in range(3, 7):
        #             self.obstacles.add((ix, iy, iz))

        # Global goal in world coordinates (tweak as you like)
        self.global_goal = Point(x=8.0, y=0.0, z=-1.0)

        # Waypoints will be filled by the planner
        self.waypoints = []
        self.current_idx = 0
        self.path_planned = False

        # State from odometry
        self.position = None
        self.yaw = 0.0

        # Horizontal control gains
        self.distance_tolerance = 0.5   # per-waypoint tolerance
        self.max_surge = 0.5
        self.k_dist = 0.2
        self.k_yaw = 0.5

        # Depth control gains
        self.depth_tolerance = 0.3
        self.max_heave = 0.4
        self.k_depth = 0.5   # flip sign if Z goes wrong way

        # Subscriptions / publishers
        self.odom_sub = self.create_subscription(
            Odometry,
            '/mini_alpha/odometry',
            self.odom_callback,
            10,
        )

        self.thruster_pub = self.create_publisher(
            Float64MultiArray,
            '/mini_alpha/stonefish/thruster_command',
            10,
        )

        # Control loop at 10 Hz
        self.timer = self.create_timer(0.1, self.control_loop)

        self.get_logger().info('Waypoint follower with 3D A* started.')

    # ----------------------------------------------------------------------
    # ROS callbacks
    # ----------------------------------------------------------------------
    def odom_callback(self, msg: Odometry):
        self.position = msg.pose.pose.position
        q = msg.pose.pose.orientation
        self.yaw = quat_to_yaw(q.x, q.y, q.z, q.w)

    def control_loop(self):
        if self.position is None:
            return

        # 1) Plan path once, when we first have odom
        if not self.path_planned:
            path = self.plan_path_3d(self.position, self.global_goal)
            if not path:
                self.get_logger().error('3D A* failed to find a path.')
                # Stop vehicle if planning fails
                cmd = Float64MultiArray()
                cmd.data = [0.0, 0.0, 0.0, 0.0]
                self.thruster_pub.publish(cmd)
                self.path_planned = True  # avoid spamming planner
                return

            self.waypoints = path
            self.current_idx = 0
            self.path_planned = True
            self.get_logger().info(f'3D A* planned path with {len(self.waypoints)} waypoints.')
            return  # next timer tick will start tracking

        # 2) If no waypoints (e.g., planning failed), stop
        if not self.waypoints or self.current_idx >= len(self.waypoints):
            cmd = Float64MultiArray()
            cmd.data = [0.0, 0.0, 0.0, 0.0]
            self.thruster_pub.publish(cmd)
            return

        # 3) Track the current waypoint
        target = self.waypoints[self.current_idx]

        dx = target.x - self.position.x
        dy = target.y - self.position.y
        dz = target.z - self.position.z

        dist_xy = math.sqrt(dx * dx + dy * dy)

        # Debug info
        self.get_logger().debug(
            f'wp {self.current_idx}/{len(self.waypoints)-1}: '
            f'pos=({self.position.x:.2f},{self.position.y:.2f},{self.position.z:.2f}) '
            f'tgt=({target.x:.2f},{target.y:.2f},{target.z:.2f}) '
            f'dist_xy={dist_xy:.2f}, dz={dz:.2f}'
        )

        # Reached this waypoint?
        if dist_xy < self.distance_tolerance and abs(dz) < self.depth_tolerance:
            self.get_logger().info(
                f'Reached waypoint {self.current_idx}: '
                f'({target.x:.2f}, {target.y:.2f}, {target.z:.2f})'
            )
            self.current_idx += 1
            return

        # Heading error
        desired_yaw = math.atan2(dy, dx) if dist_xy > 1e-3 else self.yaw
        yaw_error = self.angle_wrap(desired_yaw - self.yaw)

        # Surge (forward) control
        surge_cmd = self.k_dist * dist_xy
        surge_cmd = max(min(surge_cmd, self.max_surge), -self.max_surge)

        # Yaw control
        yaw_term = self.k_yaw * yaw_error
        yaw_term = max(min(yaw_term, 0.3), -0.3)

        # Depth control (heave)
        heave_cmd = self.k_depth * dz
        heave_cmd = max(min(heave_cmd, self.max_heave), -self.max_heave)

        # Map to thrusters:
        # T0 & T1: surge (port & starboard)
        # T2 & T3: heave
        t0 = surge_cmd + yaw_term
        t1 = surge_cmd - yaw_term
        t2 = heave_cmd
        t3 = heave_cmd

        cmd = Float64MultiArray()
        cmd.data = [t0, t1, t2, t3]
        self.thruster_pub.publish(cmd)

    # ----------------------------------------------------------------------
    # 3D A* planner
    # ----------------------------------------------------------------------
    def plan_path_3d(self, start_point: Point, goal_point: Point):
        """Plan a 3D path in the voxel grid using A*."""

        start_idx = self.world_to_grid(start_point.x, start_point.y, start_point.z)
        goal_idx = self.world_to_grid(goal_point.x, goal_point.y, goal_point.z)

        if start_idx is None or goal_idx is None:
            self.get_logger().error(
                f'Start or goal out of grid bounds. start_idx={start_idx}, goal_idx={goal_idx}'
            )
            return None

        self.get_logger().info(
            f'Planning 3D path from grid {start_idx} to {goal_idx} '
            f'(start=({start_point.x:.2f},{start_point.y:.2f},{start_point.z:.2f}), '
            f'goal=({goal_point.x:.2f},{goal_point.y:.2f},{goal_point.z:.2f}))'
        )

        path_indices = self.a_star_3d(start_idx, goal_idx)

        if not path_indices:
            return None

        # Convert grid indices back to world coordinates (centers of voxels)
        waypoints = []
        # Optionally subsample to reduce number of points (e.g., every Nth cell)
        N = 2  # keep every 2nd cell
        for i, (ix, iy, iz) in enumerate(path_indices):
            if i % N != 0 and i != len(path_indices) - 1:
                continue
            x, y, z = self.grid_to_world(ix, iy, iz)
            waypoints.append(Point(x=x, y=y, z=z))

        return waypoints

    def a_star_3d(self, start, goal):
        """Vanilla 3D A* on the voxel grid."""

        # occupancy: 0 = free, 1 = obstacle
        # For now, we build it implicitly via self.obstacles set
        def is_free(ix, iy, iz):
            if ix < 0 or iy < 0 or iz < 0:
                return False
            if ix >= self.grid_size_x or iy >= self.grid_size_y or iz >= self.grid_size_z:
                return False
            return (ix, iy, iz) not in self.obstacles

        def heuristic(a, b):
            (ax, ay, az) = a
            (bx, by, bz) = b
            return math.sqrt((ax - bx) ** 2 + (ay - by) ** 2 + (az - bz) ** 2)

        # 6-connected neighbors (±x, ±y, ±z). You can add diagonals later if you want.
        neighbor_dirs = [
            (1, 0, 0),
            (-1, 0, 0),
            (0, 1, 0),
            (0, -1, 0),
            (0, 0, 1),
            (0, 0, -1),
        ]

        open_heap = []
        heapq.heappush(open_heap, (0.0, start))
        came_from = {}
        g_score = {start: 0.0}

        closed = set()

        while open_heap:
            _, current = heapq.heappop(open_heap)

            if current in closed:
                continue

            if current == goal:
                # Reconstruct path
                path = [current]
                while current in came_from:
                    current = came_from[current]
                    path.append(current)
                path.reverse()
                return path

            closed.add(current)

            for dx, dy, dz in neighbor_dirs:
                nx = current[0] + dx
                ny = current[1] + dy
                nz = current[2] + dz
                neighbor = (nx, ny, nz)

                if not is_free(nx, ny, nz):
                    continue

                tentative_g = g_score[current] + 1.0  # uniform cost per step

                if neighbor in g_score and tentative_g >= g_score[neighbor]:
                    continue

                came_from[neighbor] = current
                g_score[neighbor] = tentative_g
                f = tentative_g + heuristic(neighbor, goal)
                heapq.heappush(open_heap, (f, neighbor))

        # No path
        return None

    # ----------------------------------------------------------------------
    # Grid conversion utilities
    # ----------------------------------------------------------------------
    def world_to_grid(self, x, y, z):
        """Convert world coordinates to voxel indices (ix, iy, iz)."""
        ix = int((x - self.grid_min_x) / self.voxel_size)
        iy = int((y - self.grid_min_y) / self.voxel_size)
        iz = int((z - self.grid_min_z) / self.voxel_size)

        if ix < 0 or iy < 0 or iz < 0:
            return None
        if ix >= self.grid_size_x or iy >= self.grid_size_y or iz >= self.grid_size_z:
            return None
        return (ix, iy, iz)

    def grid_to_world(self, ix, iy, iz):
        """Convert voxel indices to world coordinates (center of voxel)."""
        x = self.grid_min_x + (ix + 0.5) * self.voxel_size
        y = self.grid_min_y + (iy + 0.5) * self.voxel_size
        z = self.grid_min_z + (iz + 0.5) * self.voxel_size
        return x, y, z

    @staticmethod
    def angle_wrap(angle):
        """Wrap angle to [-pi, pi]."""
        while angle > math.pi:
            angle -= 2.0 * math.pi
        while angle < -math.pi:
            angle += 2.0 * math.pi
        return angle


def main(args=None):
    rclpy.init(args=args)
    node = WaypointFollower()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

