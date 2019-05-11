#include<ros/ros.h>
#include<opencv2/opencv.hpp>
#include<image_transport/image_transport.h>
#include<cv_bridge/cv_bridge.h>
int main(int argc,char** argv)
{
ros::init(argc,argv,"image_publisher");
ros::NodeHandle nh;
cv::VideoCapture cap(0);
image_transport::ImageTransport it(nh);
image_transport::Publisher obj=it.advertise("talk",1000);
cv::Mat img;
ros::Rate ob(5);
while(ros::ok())
{
cap>>img;
sensor_msgs::ImagePtr msg=cv_bridge::CvImage(std_msgs::Header(),"bgr8",img).toImageMsg();
obj.publish(msg);
ros::spinOnce();
}
}
