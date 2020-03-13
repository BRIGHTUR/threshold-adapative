#include<iostream>
#include<opencv2/opencv.hpp>
using namespace std;
using namespace cv;
int main()
{
	Mat srcMat = imread("test.jpg",0);
	Mat result1;
	Mat result2;
	threshold(srcMat, result1, 100, 255, THRESH_BINARY);
	adaptiveThreshold(srcMat, result2, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY_INV, 15, 10);
	imshow("srcMat", srcMat);
	imshow("threShold", result1);
	imshow("adaptiveThreshold", result2);
	waitKey(0);
	//system("pause");
}