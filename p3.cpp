#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: p3 img" << endl;
		return 0;
	}
	Mat img = imread(argv[1]);
	cout << "First 10 pixels: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << img.at<Vec3b>(0, i) << endl;
	}
	return 0;
}
