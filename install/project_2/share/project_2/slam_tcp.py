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
        #    package='rviz2',
        #    executable='rviz2',
        #    output='screen',
        #    arguments=['-d', os.path.join(package_dir, 'nav2_unity.rviz')],
        #    parameters=[{'use_sim_time':True}]
        #)
    })

