#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <iostream>
using namespace std;
using namespace cv;
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: q img" << endl;
		return 0;
	}
	Mat img =imread(argv[1]);
	imshow("Origin", img);
	cvtColor(img, img, COLOR_BGR2GRAY);
	imshow("GrayScale", img);
	equalizeHist(img, img);
	imshow("Equalize Histogram", img);
	waitKey(0);
	return 0;
}
