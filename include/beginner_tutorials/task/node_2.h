#ifndef WAH_H
#define WAH_H

#include<ros/ros.h>
#include<std_msgs/Int32.h>
class node_2
{
private:
  ros::Publisher ob1;
  ros::Subscriber ob2;
  std_msgs::Int32 m;
  int data;
  ros::NodeHandle nh;
public:
  node_2(ros::NodeHandle _nh);
  void callback(std_msgs::Int32 msg);

};
#endif
