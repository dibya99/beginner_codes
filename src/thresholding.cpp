#include<opencv2/opencv.hpp>
#include<iostream>
using namespace std;
using namespace cv;
int main(int argc,char**argv)
{
  VideoCapture vc(0);
  int h;
  int hmax=255;
  int s;
  int smax=255;
  int v;
  int vmax=255;
  Mat rgb;
  Mat gray;
  Mat hsv;
  namedWindow("W2",WINDOW_NORMAL);
  namedWindow("W1",WINDOW_NORMAL);
  createTrackbar("h","W2",&h,255,NULL);
  createTrackbar("hmax","W2",&hmax,255,NULL);
  createTrackbar("s","W2",&s,255,NULL);
  createTrackbar("smax","W2",&smax,255,NULL);
  createTrackbar("v","W2",&v,255,NULL);
  createTrackbar("vmax","W2",&vmax,255,NULL);
  while(1)
  {
    vc>>rgb;
    cvtColor(rgb,hsv,CV_BGR2HSV);
    imshow("W1",rgb);
    inRange(hsv,Scalar(h,s,v),Scalar(hmax,smax,vmax),gray);
    imshow("W2",gray);
    char ch=waitKey(50);
    if (ch=='k')
    break;

  }
}
