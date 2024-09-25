#include <iostream>
#include <iterator>
#include <opencv2/core/types.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;
int main(){
	Mat image = imread("/home/arin/code/opencv/image.jpg");
	Mat cropped(image,Rect(250,230,300,300));
	
	 if(image.empty()){
		std::cerr <<"Could not open or find the image."<<std::endl;
		return -1;
	}
       
      
	dilate(cropped, cropped,Mat(),Point(-1,-1),5);    
	imshow("display image",image);
	waitKey(0);
	return 0;

}
