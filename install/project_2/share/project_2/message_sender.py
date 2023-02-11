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
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(get_package_share_directory('ros_tcp_endpoint'), 'launch', 'endpoint.py')
            ),
        ),
        Node(
            package='project_2',
            executable='arduino_reader',
            name='arduino_reader',
        ),
        Node(
            package='project_2',
            executable='imu_reader',
            name='imu_reader',
        ),
        Node(
            package='project_2',
            executable='joy_motor',
            name='joy_motor',
        ),
        Node(
            package='project_2',
            executable='message_sender',
            name='message_sender',
        ),
    })

