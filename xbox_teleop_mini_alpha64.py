#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from sensor_msgs.msg import Joy
from std_msgs.msg import Float64MultiArray


class XboxTeleopMiniAlpha64(Node):
    def __init__(self):
        super().__init__('xbox_teleop_mini_alpha64')

        # Subscribe to joystick
        self.sub_joy = self.create_subscription(
            Joy,
            '/joy',  # change if your joy topic is different
            self.joy_callback,
            10
        )

        # Publish directly to Stonefish thruster command
        self.pub_thrusters = self.create_publisher(
            Float64MultiArray,
            '/mini_alpha/stonefish/thruster_command',
            10
        )

        self.max_thrust = 5.0   # tweak for how strong it feels
        self.deadzone = 0.1

        self.get_logger().info('Xbox teleop (Float64) for Mini Alpha started.')

    def joy_callback(self, msg: Joy):
        # Helper: safe axis get with deadzone
        def get_axis(i, default=0.0):
            return msg.axes[i] if i < len(msg.axes) else default

        def dz(x):
            return 0.0 if abs(x) < self.deadzone else x

        # NOTE: adjust these indices after checking `ros2 topic echo /joy`
        # Common Xbox mapping:
        #   axes[0] = left stick horizontal  (left/right)
        #   axes[1] = left stick vertical    (forward/back)
        #   axes[4] = right stick vertical   (up/down)
        lx = dz(get_axis(0))  # yaw
        ly = dz(get_axis(1))  # forward/back
        ry = dz(get_axis(4))  # heave

        # Many pads report forward as negative → flip sign if needed
        forward = ly * self.max_thrust   # stick forward -> +thrust
        yaw     =  lx * self.max_thrust   # left/right yaw
        heave   = -ry * self.max_thrust   # stick up -> go up

        # Differential for surge thrusters
        surge_port = forward - yaw
        surge_stbd = forward + yaw

        heave_port = heave
        heave_stbd = heave

        cmd = Float64MultiArray()
        cmd.data = [
            float(surge_port),
            float(surge_stbd),
            float(heave_port),
            float(heave_stbd),
        ]

        # Log occasionally so we know it's doing something
        self.get_logger().debug(f"Cmd: {cmd.data}")
        self.pub_thrusters.publish(cmd)


def main():
    rclpy.init()
    node = XboxTeleopMiniAlpha64()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()

