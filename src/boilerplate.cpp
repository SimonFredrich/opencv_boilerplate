#include "opencv2/core.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"

#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(int, char**)
{
	String image_file = "../pictures/opencv.png";
	
	Mat image;
	image = imread(image_file, IMREAD_COLOR);

	if (image.empty())
	{
		printf("Could not open the image!");
		return -1;
	}

	namedWindow("Display window", WINDOW_AUTOSIZE);
	imshow("Display window", image);
	waitKey(0);
	return 0;
}
