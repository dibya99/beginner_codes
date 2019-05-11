#include<ros/ros.h>
#include<std_msgs/String.h>
void callback(std_msgs::String msg)
{
ROS_INFO("I AM CURRENTLY HEARING %s",msg.data.c_str());
}
int main(int argc,char **argv)
{
ros::init(argc,argv,"listener");
ros::NodeHandle n;
ros::Subscriber ob=n.subscribe("chatter",1000,callback);
ros::spin();
}


