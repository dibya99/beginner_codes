#include<beginner_tutorials/task/node_3.h>
int main(int argc,char**argv)
{
  ros::init(argc,argv,"node3");
  ros::NodeHandle nh;
  node_3 obj(nh);
  ros::spin();
}
