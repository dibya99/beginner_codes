#include<ros/ros.h>

#include<std_msgs/String.h>
#include<sstream>
#include<std_msgs/Int32.h>
int main(int argc,char **argv)
{
ros::init(argc,argv,"node_1");
ros::NodeHandle n;
ros::Publisher ob=n.advertise<std_msgs::Int32>("talk",1000);
ros::Rate r1(1);
int k=1;
while(ros::ok())
{
//std::stringstream s;
//s<<k;
//std_msgs::String msg;
//msg.data=s.str();
//ROS_INFO("%s",msg.data.c_str());
std_msgs::Int32 z;
z.data=k;
ob.publish(z);
ROS_INFO("I PUBLISH %d",z.data);
k++;
r1.sleep();
}
}

