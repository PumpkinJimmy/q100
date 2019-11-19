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
	Mat img =imread(argv[1]);
	imshow("Origin", img);
	Laplacian(img, img, -1);
	imshow("Laplacian Filter", img);
	waitKey(0);
	return 0;
}
