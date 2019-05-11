#include<beginner_tutorials/task/node_1.h>
node_1::node_1(ros::NodeHandle _nh)
{
  nh=_nh;
  count=1;
  ob=nh.advertise<std_msgs::Int32>("talk",1000);

}
void node_1::execute()
{
  msg.data=count;
  ob.publish(msg);
  count+=1;
  ROS_INFO("I PUBLISH:%d",msg.data);
}
