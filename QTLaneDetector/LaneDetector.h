#pragma once
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "parameters.h"
#include "LineFit.h"
using namespace cv;

class LaneDetector
{
public:
	LaneDetector();
	~LaneDetector();
	static Mat Detect(Mat frame, parameters params, HLparameters hlparams, ROIparams roiparams);
	static Mat HSVThresholder(Mat frame, Scalar yd, Scalar yu);
	static Mat WhiteThresholder(Mat frame, int min, int max);
	static bool isInFrame(Vec4i v, int w, int h);
};

