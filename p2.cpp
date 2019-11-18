#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Usage: p2 img" << std::endl;
		return 0;
	}
	Mat img = imread(argv[1]);
	imshow("P2 Show Image", img);
	waitKey(0);
	return 0;
}
