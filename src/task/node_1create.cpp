#include<beginner_tutorials/task/node_1.h>
int main(int argc,char**argv)
{
  ros::init(argc,argv,"N1");
  ros::NodeHandle n;
  node_1 object(n);
  ros::Rate o(1);
  while(ros::ok())
  {
    object.execute();
    o.sleep();
    ros::spinOnce();
  }
}
