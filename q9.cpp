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
	Mat img =imread(argv[1]);
	imshow("Origin", img);
	medianBlur(img, img, 5);
	imshow("Median Filter", img);
	waitKey(0);
	return 0;
}
