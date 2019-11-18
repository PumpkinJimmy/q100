#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: q img" << endl;
		return 0;
	}
	Mat img = imread(argv[1]), img_hsv;
	imshow("Origin", img);
	cvtColor(img, img_hsv, COLOR_BGR2HSV);
	imshow("HSV", img_hsv);
	vector<Mat> channels;
	split(img_hsv, channels);
	Mat img_mask; inRange(img_hsv, Scalar(160, 100, 40), Scalar(180, 255, 255), img_mask);
	Mat img_red, img_blue;
	img.copyTo(img_red, img_mask);
	imshow("Red", img_red);
	inRange(img_hsv, Scalar(100, 43, 46), Scalar(124, 255, 255), img_mask);
	img.copyTo(img_blue, img_mask);
	imshow("Blue", img_blue);
	waitKey(0);
	return 0;
}
