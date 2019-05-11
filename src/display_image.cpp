#include<ros/ros.h>
#include<iostream>
#include<opencv2/opencv.hpp>
#include<string>
using namespace cv;
using namespace std;
int main(int argc,char** argv)
{
String imageName;
if(argc==1)
{
cout<<"NO IMAGE FOUND\n";
return -1;
}
else
imageName=argv[1];
Mat image;
image=imread(imageName,IMREAD_COLOR);
if(image.empty())
{
cout<<"Could not find image"<<endl;
return -1;
}
namedWindow("Display",WINDOW_FREERATIO);
imshow("Display",image);
waitKey(0);
return 0;
}


