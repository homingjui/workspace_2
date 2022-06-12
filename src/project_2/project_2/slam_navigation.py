import rclpy
import numpy as np
from rclpy.node import Node
#from msg_manage.msg import Motor2
from geometry_msgs.msg import TwistStamped
from tf2_msgs.msg import TFMessage
from scipy.spatial.transform import Rotation


class slam_navigation_node(Node):
    def __init__(self):
        super().__init__('slam_navigation_node')
        self.publisher_ = self.create_publisher(TwistStamped, 'slam_navigation', 10)
        self.create_subscription(TFMessage,'tf',self.get_tf,10)

        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.controller)
        self.i = 0
        self.car_pos = [0,0]
        self.car_tf = [0,0,0]
        self.now_dot = 0
        self.rout = np.array([[0,0],[0,5.5],[-3,5.5],[-3,4.5],[0,4.5],[0,0]])

    def logger(self,data):
        self.get_logger().info(str(data))
    
    def get_deg(self,vac1,vac2):
        vac1 = np.array(vac1)
        vac2 = np.array(vac2)
        norm = np.linalg.norm(vac1)*np.linalg.norm(vac2)
        rho = np.arcsin(np.cross(vac1,vac2)/norm)
        cos_ang= vac1.dot(vac2) / norm
        ang=np.rad2deg(np.arccos(cos_ang))

        if rho<0:
            return -ang
        return ang

    def get_tf(self,data):
        for i in data.transforms:
            if i.child_frame_id == "base_footprint":
                self.car_pos = [i.transform.translation.x,i.transform.translation.y]
                tfx = i.transform.rotation.x
                tfy = i.transform.rotation.y
                tfz = i.transform.rotation.z
                tfw = i.transform.rotation.w
                rot = Rotation.from_quat([tfx, tfy, tfz, tfw])
                self.car_tf = rot.as_euler('xyz')
                #self.logger(self.car_pos)
                #self.logger(self.car_tf)

    def controller(self):
        deg = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                           self.rout[self.now_dot+1]-self.car_pos)
        self.logger(deg)

        data = TwistStamped()
        
        data.header.stamp = self.get_clock().now().to_msg()
        data.twist.linear.x = 0.0
        data.twist.angular.z = deg
        self.publisher_.publish(data)
        #self.logger(str(data))
        self.i += 1


def main(args=None):
    rclpy.init(args=args)
    print("slam navigation start")
    slam_navigation = slam_navigation_node()

    rclpy.spin(slam_navigation)

    slam_navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
