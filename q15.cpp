#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
const int bz = 2;
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: q img" << endl;
		return 0;
	}
	Mat img =imread(argv[1]), imgx, imgy;
	imshow("Origin", img);
	Sobel(img, imgx, -1, 1, 0);
	Sobel(img, imgy, -1, 0, 1);
	Sobel(img, img, -1, 1, 1);
	imshow("Sobel Filter(X)", imgx);
	imshow("Sobel Filter(Y)", imgy);
	imshow("Sobel Filter(both)", img);
	waitKey(0);
	return 0;
}
