source /opt/ros/foxy/setup.bash
cd ws_code
# colcon build --symlink-install
. install/setup.bash
ros2 launch co_lrio run.launch.py