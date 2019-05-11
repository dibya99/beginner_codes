#include<opencv2/opencv.hpp>
#include<iostream>
using namespace cv;
int main(int argc,char**argv)
{
  int x=0;
  int kernel_size=3;
  Mat img=imread(argv[1],IMREAD_COLOR);
  namedWindow("W1",WINDOW_FREERATIO);
  namedWindow("W2",WINDOW_FREERATIO);
  namedWindow("W3",WINDOW_FREERATIO);
  namedWindow("W4",WINDOW_FREERATIO);
  namedWindow("W5",WINDOW_FREERATIO);
  createTrackbar("k-size","W2",&kernel_size,50,NULL);
  createTrackbar("k-size","W3",&kernel_size,200,NULL);
  createTrackbar("x","W3",&x,2,NULL);
  createTrackbar("k-size","W4",&kernel_size,50,NULL);
  createTrackbar("k-size","W5",&kernel_size,400,NULL);
  Mat result;
  Mat result2;
  Mat result3;
  Mat result4;
  Mat element = getStructuringElement(cv::MORPH_RECT,
              cv::Size(kernel_size,kernel_size),
              cv::Point(-1, -1) );

  while(1)
  {
    if(kernel_size%2==0)
    kernel_size+=1;
    imshow("W1",img);
    blur(img,result,Size(kernel_size,kernel_size));
    GaussianBlur(img,result2,Size(kernel_size,kernel_size),x);
    medianBlur(img,result3,kernel_size);
    dilate(img,result4,element);
    imshow("W2",result);
    imshow("W3",result2);
    imshow("W4",result3);
    imshow("W5",result4);
    char ch=waitKey(100);
    if(ch=='k')
    break;
  }

}
