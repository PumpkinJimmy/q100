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
	Mat img = imread(argv[1]), img_gray, img_bin, img_res;
	cvtColor(img, img_gray, COLOR_BGR2GRAY);
	imshow("Gray", img_gray);
	threshold(img_gray, img_bin, 150, 255, THRESH_BINARY);
	imshow("Threshold", img_bin);
	Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
	dilate(img_bin, img_res, kernel);
	imshow("Dilate", img_res);
	erode(img_bin, img_res, kernel);
	imshow("Erode", img_res);
	morphologyEx(img_bin, img_res, MORPH_GRADIENT, kernel);
	imshow("Gradient", img_res);
	morphologyEx(img_bin, img_res, MORPH_OPEN, kernel);
	imshow("Open", img_res);
	morphologyEx(img_bin, img_res, MORPH_CLOSE, kernel);
	imshow("Close", img_res);
	morphologyEx(img_bin, img_res, MORPH_TOPHAT, kernel);
	imshow("TopHat", img_res);
	morphologyEx(img_bin, img_res, MORPH_BLACKHAT, kernel);
	imshow("BlackHat", img_res);
	waitKey(0);

	return 0;
}



