#include<ros/ros.h>
#include<std_msgs/String.h>
#include<sstream>
int main(int argc,char **argv)
{
ros::init(argc,argv,"talker");
ros::NodeHandle n;
ros::Publisher obj=n.advertise<std_msgs::String>("chatter",1000);
ros::Rate ob(1);
while(ros::ok())
{
std_msgs:: String msg;
std::stringstream s;
s<<"HI MC";
msg.data=s.str();
obj.publish(msg);
ROS_INFO("%s",msg.data.c_str());
ob.sleep();
}
}

