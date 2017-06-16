#pragma once
#include<vector>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
class LineFit
{
public:
	LineFit(std::vector<Point> v);
	double getA() { return a; };
	double getB() { return b; };
	~LineFit();
private: 
	double a;
	double b;
	
};

