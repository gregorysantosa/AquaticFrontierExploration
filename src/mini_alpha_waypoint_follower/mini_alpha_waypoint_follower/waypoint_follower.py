#!/usr/bin/env python3

import math

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

        # Simple out-and-back path
        #Corners (5,5), (5, -5), (-5, -5), (-5, 5)
        self.waypoints = [
            Point(x=6.5,  y=6.5,  z=0.5),
            Point(x=-6.5,  y=6.5,  z=1.0),
            Point(x=-6.5,  y=-6.5,  z=1.5),
            Point(x=6.5,  y=-6.5,  z=2.0),
            
            Point(x=6.5,  y=6.5,  z=2.5),
            Point(x=-6.5,  y=6.5,  z=3.0),
            Point(x=-6.5,  y=-6.5,  z=3.5),
            Point(x=6.5,  y=-6.5,  z=4.0),
           
            Point(x=6.5,  y=6.5,  z=4.5),
            Point(x=-6.5,  y=6.5,  z=5.0),
            Point(x=-6.5,  y=-6.5,  z=5.5),
            Point(x=6.5,  y=-6.5,  z=6.0),
            
            Point(x=6.5,  y=6.5,  z=5.5),
            Point(x=-6.5,  y=6.5,  z=6.0),
            Point(x=-6.5,  y=-6.5,  z=6.5),
            Point(x=6.5,  y=-6.5,  z=7.0),
            
            Point(x=6.5,  y=6.5,  z=7.5),
            Point(x=-6.5,  y=6.5,  z=8.0),
            Point(x=-6.5,  y=-6.5,  z=8.5),
            Point(x=6.5,  y=-6.5,  z=9.0),
            
            
            #Point(x=10.0,  y=10.0,  z=-5.0),
        ]

        self.current_idx = 0
        self.position = None
        self.yaw = 0.0

        # Horizontal control gains
        self.distance_tolerance = 1.0   # 1m radius in XY
        self.max_surge = 0.5
        self.k_dist = 0.2
        self.k_yaw = 0.5

        # Depth control gains (tune these)
        self.depth_tolerance = 0.3      # meters
        self.max_heave = 0.4
        self.k_depth = 0.5              # flip sign if Z goes the wrong way

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

        self.timer = self.create_timer(0.1, self.control_loop)

        self.get_logger().info('Waypoint follower node started.')

    def odom_callback(self, msg: Odometry):
        self.position = msg.pose.pose.position
        q = msg.pose.pose.orientation
        self.yaw = quat_to_yaw(q.x, q.y, q.z, q.w)

    def control_loop(self):
        if self.position is None:
            return

        if self.current_idx >= len(self.waypoints):
            # All waypoints done: stop thrusters
            cmd = Float64MultiArray()
            cmd.data = [0.0, 0.0, 0.0, 0.0]
            self.thruster_pub.publish(cmd)
            return

        target = self.waypoints[self.current_idx]

        dx = target.x - self.position.x
        dy = target.y - self.position.y
        dz = target.z - self.position.z

        dist_xy = math.sqrt(dx * dx + dy * dy)

        # Debug info
        self.get_logger().debug(
            f'wp {self.current_idx}: pos=({self.position.x:.2f},{self.position.y:.2f},{self.position.z:.2f}) '
            f'tgt=({target.x:.2f},{target.y:.2f},{target.z:.2f}) '
            f'dist_xy={dist_xy:.2f}, dz={dz:.2f}'
        )

        # Reached this waypoint? (XY + depth tolerance)
        if dist_xy < self.distance_tolerance and abs(dz) < self.depth_tolerance:
            self.get_logger().info(
                f'Reached waypoint {self.current_idx}: ({target.x}, {target.y}, {target.z})'
            )
            self.current_idx += 1
            return

        # Heading error for yaw
        desired_yaw = math.atan2(dy, dx)
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

        # Map surge + yaw to surge thrusters, depth to heave thrusters
        t0 = surge_cmd + yaw_term
        t1 = surge_cmd - yaw_term
        t2 = heave_cmd
        t3 = heave_cmd

        cmd = Float64MultiArray()
        cmd.data = [t0, t1, t2, t3]
        self.thruster_pub.publish(cmd)

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

