
#include<opencv2/opencv.hpp>
#include<ros/ros.h>
#include<iostream>
using namespace cv;
using namespace std;
using namespace ros;
int main(int argc,char**argv)
{
Mat A=imread("/home/dibya/images/image1.jpg",IMREAD_COLOR);
for(int i=2000;i<2050;i++)
{
for(int j=2000;j<2050;j++)
{
for(int k=0;k<A.channels();k++)
{
//cout<<k<<" ";
Vec3b intensity=A.at<Vec3b>(i,j);
uchar blue=intensity.val[0];
cout<<blue<<" ";
}
cout<<endl;
}
}
namedWindow("W1",WINDOW_NORMAL);
imshow("W1",A);
waitKey(0);
}



