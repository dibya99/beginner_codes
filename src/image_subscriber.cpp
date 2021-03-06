#include<ros/ros.h>
#include<opencv2/opencv.hpp>
#include<image_transport/image_transport.h>
#include<cv_bridge/cv_bridge.h>
#include<iostream>
void call(const sensor_msgs::ImageConstPtr& msg)
{
try
{
cv::imshow("view",cv_bridge::toCvShare(msg,"bgr8")->image);
if(cv::waitKey(30)=='k')
std::exit(0);
}
catch(cv_bridge::Exception& e)
{
ROS_ERROR("ERROR");
}
}

int main(int argc,char** argv)
{
ros::init(argc,argv,"image_subscriber");
ros::NodeHandle nh;
cv::namedWindow("view",CV_WINDOW_NORMAL);
image_transport::ImageTransport it(nh);
image_transport::Subscriber sub=it.subscribe("talk",1000,call);
ros::spin();
cv::destroyWindow("view");
}
