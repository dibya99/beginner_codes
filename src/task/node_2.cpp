#include<beginner_tutorials/task/node_2.h>
node_2::node_2(ros::NodeHandle _nh)
{
  nh=_nh;
  ob1=nh.advertise<std_msgs::Int32>("talk2",1000);
  ob2=nh.subscribe("talk",1000,&node_2::callback,this);
}
void node_2::callback(std_msgs::Int32 msg)
{
  data=msg.data*msg.data;
  m.data=data;
  ob1.publish(m);
  ROS_INFO("I SUBSCRIBE %d",msg.data);
  ROS_INFO("I PUBLISH %d",data);
}
