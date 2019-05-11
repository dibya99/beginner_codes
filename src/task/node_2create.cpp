#include<beginner_tutorials/task/node_2.h>
int main(int argc,char** argv)
{
  ros::init(argc,argv,"N2");
  ros::NodeHandle nh;
  node_2 obj(nh);
  ros::spin();
}
