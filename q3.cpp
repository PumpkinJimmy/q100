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
	Mat img = imread(argv[1]), img_gray, img_abin, img_bin;
	cvtColor(img, img_gray, COLOR_BGR2GRAY);
	imshow("Gray", img_gray);
	//threshold(img_gray, img_bin, 125, 255, THRESH_BINARY);
	adaptiveThreshold(img_gray, img_abin, 255, ADAPTIVE_THRESH_GAUSSIAN_C, THRESH_BINARY, 3, 0);
	threshold(img_gray, img_bin, 150, 255, THRESH_BINARY);
	imshow("Adpative Threshold", img_abin);
	imshow("Threshold", img_bin);
	waitKey(0);

	return 0;
}



