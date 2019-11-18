#include <iostream>
#include <cstring>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: p4 img" << endl;
		return 0;
	}
	Mat img = imread(argv[1]);
	imshow("Origin", img);
	waitKey(0);
	pyrDown(img, img);
	imshow("Simaller", img);
	waitKey(0);
	char newname[100] = "s_";
	strcat(newname, argv[1]);
	cout << "Save at " << newname << endl;
	imwrite(newname, img);
	return 0;
}



