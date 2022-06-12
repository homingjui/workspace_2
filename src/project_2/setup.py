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
                                                'launch/slam_tcp.py'
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
            'talker = project_2.test_pub:main',
            'listener = project_2.test_sub:main',
            'service = project_2.test_service:main',
            'client = project_2.test_client:main',
            'talker2 = project_2.test_mymsg:main',
            'listener2 = project_2.test_mymsg2:main',
            'service2 = project_2.test_mysrv:main',
            'client2 = project_2.test_mysrv2:main',
            'param_test = project_2.test_parm:main',
            'motor_cmd = project_2.motor_cmd:main',
            'slam_navigation = project_2.slam_navigation:main',


        ],
    },
)
