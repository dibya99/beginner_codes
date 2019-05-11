#ifndef WOO_H
#define WOO_H
#include<ros/ros.h>
#include<std_msgs/Int32.h>
class node_3
{
private:
  ros::Subscriber ob1;
  ros::Subscriber ob2;
  ros::NodeHandle nh;
public:
  node_3(ros::NodeHandle _nh);
  void callback1(std_msgs::Int32 msg1);
  void callback2(std_msgs::Int32 msg2);
};
#endif
