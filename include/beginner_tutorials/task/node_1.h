#ifndef WOW_H
#define WOW_H

#include<ros/ros.h>
#include<std_msgs/Int32.h>
class node_1
{
public:
  node_1(ros::NodeHandle nh);
  void execute();


private:
  ros::NodeHandle nh;
  ros::Publisher ob;
  int count;
  std_msgs::Int32 msg;
};
#endif
