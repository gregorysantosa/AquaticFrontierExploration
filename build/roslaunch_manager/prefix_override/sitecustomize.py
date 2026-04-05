import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/arc/ws_sf_ros2/install/roslaunch_manager'
