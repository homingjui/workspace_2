import os
from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import Node


def generate_launch_description():
    package_name = 'unity_slam_example'
    package_dir = get_package_share_directory(package_name)

    return LaunchDescription({
        Node(
            package='ros_tcp_endpoint',
            executable='default_server_endpoint',
            emulate_tty=True,
            parameters=[
                {'ROS_IP': '192.168.1.100'},
                {'ROS_TCP_PORT': 10000},
            ],
        ),

        #Node(
        #    package='project_2',
        #    executable='slam_navigation',
        #    name='slam_navigation_node',
        #    output='screen',
        #),
        #IncludeLaunchDescription(
        #    PythonLaunchDescriptionSource(
        #        os.path.join(get_package_share_directory('nav2_bringup'), 'launch', 'slam_launch.py')
        #    ),
        #),

        
        #Node(
        #    package='project_2',
        #    executable='arduino_reader',
        #    name='arduino_reader',
        #),
        #Node(
        #    package='project_2',
        #    executable='joy_motor',
        #    name='joy_motor',
        #),
        #Node(
        #    package='project_2',
        #    executable='imu_reader',
        #    name='imu_reader'
        #),
    })

