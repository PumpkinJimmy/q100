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
	Mat img = imread(argv[1]), img_gray, img_bin;
	imshow("Origin", img);
	cvtColor(img, img_gray, COLOR_BGR2GRAY);
	imshow("Gray", img_gray);
	threshold(img_gray, img_bin, 125, 255, THRESH_BINARY);
	imshow("Threshold", img_bin);
	waitKey(0);

	return 0;
}



