#include<ros/ros.h>
#include<opencv2/opencv.hpp>
using namespace cv;
int main()
{
  VideoCapture cap(0);
  if(!cap.isOpened())
  return -1;
  Mat img;
  namedWindow("W1",WINDOW_NORMAL);
  while(1)
  {
    cap>>img;
    imshow("W1",img);
    if(waitKey(50)>=0)
    break;
  }
}
