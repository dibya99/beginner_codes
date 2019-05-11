#include<ros/ros.h>
#include<std_msgs/String.h>
#include<std_msgs/Int32.h>
void call_1(std_msgs::Int32 m1)
{
//ROS_INFO("D");
ROS_INFO("DATA RECIEVED FROM NODE 1:%d",m1.data);
}
void call_2(std_msgs::Int32 m2)
{
ROS_INFO("DATA RECIEVED FROM NODE 2:%d",m2.data);
}


int main(int argc,char** argv)
{
ros::init(argc,argv,"node_3");
ros::NodeHandle n2;
ros::Subscriber ob2=n2.subscribe("talk2",1000,call_2);
ros::Subscriber ob1=n2.subscribe("talk",1000,call_1);
ros::spin();
}
