#include<iostream>
#include<string>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main(int argc,char**argv)
{
Mat image;
char imgdir[50];
cout<<"Enter the image directory\n";
cin>>imgdir;
image=imread(imgdir,IMREAD_COLOR);
Mat grayimage;
cvtColor(image,grayimage,COLOR_BGR2GRAY);
char savdir[50];
cout<<"Enter the saving directory";
cin>>savdir;
imwrite(savdir,grayimage); 
namedWindow("W1",WINDOW_NORMAL);
namedWindow("W2",WINDOW_NORMAL);
imshow("W1",image);
imshow("W2",grayimage);
waitKey(0);
}
