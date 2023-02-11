from setuptools import setup
import os
from glob import glob

package_name = 'project_2'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), [
                                                'launch/test_launch.py',
                                                'rviz/nav2_unity.rviz',
                                                'launch/slam_tcp.py',
                                                'launch/slam_launch.py',
                                                'launch/offline_launch.py',
                                                'launch/online_sync_launch.py',
                                                'params/nav2_params.yaml',
                                                'params/mapper_params_offline.yaml',
                                                'launch/message_sender.py',
                                                ]),

    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='isp',
    maintainer_email='611023011@gms.ndhu.edu.tw',
    description='pakage for ndhu ISP lab UGV project',
    license='only for isp',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'motor_cmd = project_2.motor_cmd:main',
            'slam_navigation = project_2.slam_navigation:main',
            'img_processor = project_2.img_processor:main',
            'imu_reader = project_2.imu_reader:main',
            'gps_reader = project_2.gps_reader:main',
            'arduino_reader = project_2.arduino_reader:main',
            'joy_motor= project_2.joy_motor:main',
            'message_sender = project_2.message_sender:main',
            #' = project_2.:main',

        ],
    },
)
