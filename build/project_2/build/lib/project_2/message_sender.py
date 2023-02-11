import rclpy
import numpy as np
from rclpy.node import Node
from scipy.spatial.transform import Rotation

#tf2_msgs/msg/TFMessage
from std_msgs.msg import Float32
from tf2_msgs.msg import TFMessage
from msg_manage.msg import Vehicle


class Message_sender(Node):
    def __init__(self):
        super().__init__('message_sender')
        #self.msg_pub = self.create_publisher(Vehicle, 'vehicle_msg', 0)
        self.imu_pub = self.create_publisher(Float32, 'imu_roat', 0)
        self.map_pub = self.create_publisher(Float32, 'map_roat', 0)
        self.x_pub = self.create_publisher(Float32, 'phy_x', 0)
        self.y_pub = self.create_publisher(Float32, 'phy_y', 0)
        self.create_subscription(TFMessage,'tf',self.get_tf,0)


        

    def get_tf(self,data):
        frame = data.transforms[0].child_frame_id
        #print(frame)
        tf = data.transforms[0].transform
        roat = tf.rotation
        pos = tf.translation
        xyzw = [roat.x, roat.y, roat.z, roat.w]
        xyz = Rotation.from_quat(xyzw).as_rotvec()
        rot = Float32()
        rot.data = xyz[2]
        if frame == 'laser':
            self.map_pub.publish(rot)
            pos_x = Float32()
            pos_x.data=pos.x
            self.x_pub.publish(pos_x)
            pos_y = Float32()
            pos_y.data=pos.y
            self.y_pub.publish(pos_y)
        elif frame == 'imu':
            self.imu_pub.publish(rot)


        


def main(args=None):
    rclpy.init(args=args)
    message_sender = Message_sender()
    rclpy.spin(message_sender)

    joy_cmd.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

