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
	Mat img =imread(argv[1]), img_res;
	img_res.create(img.rows / bz, img.cols / bz, img.type());
	imshow("Origin", img);
	for (int row = 0; row < img_res.rows; row++)
	{
		for (int col = 0; col < img_res.cols; col++)
		{
			Vec3b sum(0, 0, 0);
			for (int roff = 0; roff < bz && row * bz + roff < img.rows; roff++)
			{
				for (int coff = 0; coff < bz && col * bz + coff < img.cols; coff++)
				{
					sum += img.at<Vec3b>(row * bz + roff, col * bz + coff);
					
				}
			}
			img_res.at<Vec3b>(row, col) = sum / bz / bz;
		//	cout << row << ' ' << col << endl;
		}
	}
	imshow("Average Pooling", img_res);
	waitKey(0);
	return 0;
}
