#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: q2 img" << endl;
		return 0;
	}
	Mat img = imread(argv[1]), img_gray;
	imshow("Origin", img);
	cvtColor(img, img_gray, COLOR_BGR2GRAY);
	imshow("Gray", img_gray);
	Mat img_origin_gray = imread(argv[1], IMREAD_GRAYSCALE);
	imshow("Origin Gray", img_origin_gray);
	waitKey(0);
	return 0;
}



