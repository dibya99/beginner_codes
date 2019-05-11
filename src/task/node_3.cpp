#include<beginner_tutorials/task/node_3.h>
node_3::node_3(ros::NodeHandle _nh)
{
  nh=_nh;
  ob1=nh.subscribe("talk",1000,&node_3::callback1,this);
  ob2=nh.subscribe("talk2",1000,&node_3::callback2,this);
}
void node_3::callback1(std_msgs::Int32 msg1)
{
  ROS_INFO("I SUBSCRIBE FROM NODE 1 %d",msg1.data);
}
void node_3::callback2(std_msgs::Int32 msg2)
{
  ROS_INFO("I SUBSCRIBE FROM NODE 2 %d",msg2.data);
}
