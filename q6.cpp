#include <iostream>
#include <opencv2/opencv.hpp>
using namespace std;
using namespace cv;
const int N = 6;
int main(int argc, char** argv)
{
	if (argc != 2)
	{
		cout << "Usage: q img" << endl;
		return 0;
	}
	Mat img =imread(argv[1]);
	imshow("Origin", img);
	int width = 256 / N;
	for (int row = 0; row < img.rows; row++)
	{
		uchar* p = img.ptr(row);
		for (int col = 0; col < img.cols * img.channels(); col++)
		{
			p[col] = saturate_cast<uchar>((p[col] + width / 2) / width * width);
		}
	}
	imshow("Reduced", img);
	waitKey(0);
	return 0;
}
