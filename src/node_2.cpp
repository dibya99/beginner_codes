#include<ros/ros.h>
#include<sstream>
#include<std_msgs/String.h>
#include<std_msgs/Int32.h>
//#include<P_S.h>
ros::Publisher p;
void call(std_msgs::Int32 msg)
{
ros::NodeHandle n2;
 p=n2.advertise<std_msgs::Int32>("talk2",1000);
int z=msg.data*msg.data;
std_msgs::Int32 item;
item.data=z;
p.publish(item);
ROS_INFO("I SUBSCRIBE %d",msg.data);
ROS_INFO("I PUBLISH %d",item.data);
}

int main(int argc,char **argv)
{
ros::init(argc,argv,"node_2");
ros::NodeHandle n;

ros::Subscriber obj=n.subscribe("talk",1000,call);
ros::spin();

}
/*int main(int argc,char ** argv)
{
ros::init(argc,argv,"node_2");
ros::NodeHandle n;
ros::Publisher p=n.advertise<std_msgs::String>("talk2",1000);
std_msgs:: String s;
while(ros::ok())
{
s.data="DJ";
p.publish(s);
ROS_INFO("%s",s.data.c_str());
}

template<>
void P_S<std_msgs::String.std_msgs::String>::subscriberCallback(const std_msgs::String::ConstPtr& recievedMsg)
{
char* p;
ROS_INFO("I SUSCRIBED %s",recievedMsg.data.c_str());
int z=(int)strtol(recievedMsg.data.c_str(),&p,10);
z=z*z;
std::stringstream s;
s<<z;
recievedMsg.data=s.str();
publisherObject.publish(recievedMsg);
ROS_INFO("I PUBLISH %s",recievedMsg.data.c_str());
}
int main(int argc,char **argv)
{
ros::init(argc,argv,"node_2");
P_S<std_msgs::String,std_msgs::String>parrot("talk2","talk",1000);
ros::spin();
}*/



