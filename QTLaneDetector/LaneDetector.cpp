#include "LaneDetector.h"
#include <fstream>


LaneDetector::LaneDetector()
{
}


LaneDetector::~LaneDetector()
{
}

Mat LaneDetector::HSVThresholder(Mat frame, Scalar yd, Scalar yu)
{
	Mat dst;
	inRange(frame, yd, yu, dst);
	return dst;
}

Mat LaneDetector::WhiteThresholder(Mat frame, int min, int max)
{
	Mat dst;
	inRange(frame, min, max, dst);
	return dst;
}

bool LaneDetector::isInFrame(Vec4i v, int w, int h)
{
	return (v[0] >= 0 && v[0] < w && v[2] >= 0 && v[2] < w && v[1] >= 0 && v[1] < h && v[3] >= 0 && v[3] < h);
}

Mat LaneDetector::Detect(Mat frame, parameters params, HLparameters hlparams, ROIparams roiparams)
{
	
	Mat hsv;
	cvtColor(frame, hsv, CV_RGB2HSV);
	Mat gray;
	cvtColor(frame, gray, CV_RGB2GRAY);

	Mat mask, maskw, maskh;
	
	maskh = HSVThresholder(hsv, Scalar(params.h1, params.s1, params.v1), Scalar(params.h2, params.s2, params.v2));
	maskw = WhiteThresholder(gray, params.wmin, params.wmax);
	bitwise_or(maskw, maskh, mask);
	

	GaussianBlur(mask, mask, Size(5,5), 0, 0);

	int low_threshold = 50;
	int	high_threshold = 150;
	Mat edges;
	Canny(mask, edges, low_threshold, high_threshold);
	if (roiparams.use)
	{
		Mat roimask(mask.rows, mask.cols, CV_8U, Scalar(0));
		Point points[4] = { Point(roiparams.p1x, roiparams.p1y), Point(roiparams.p2x, roiparams.p2y), Point(roiparams.p3x, roiparams.p3y), Point(roiparams.p4x, roiparams.p4y) };
		fillConvexPoly(roimask, points, 4, Scalar(255));
		bitwise_and(edges, roimask, edges);
	}

	Mat dst = frame.clone();
	std::vector<Vec4i> lines;
	HoughLinesP(edges, lines, hlparams.rho, hlparams.theta*(CV_PI / 180), hlparams.threshold, hlparams.minLine, hlparams.maxLineGap);
	if (!roiparams.mark || !roiparams.use)
	{
		for (size_t i = 0; i < lines.size(); i++)
		{
			Vec4i l = lines[i];
			line(dst, Point(l[0], l[1]), Point(l[2], l[3]), Scalar(0, 0, 255), 3, CV_AA);
		}
	}
	else
	{
		std::vector<Point> rlines, llines;
		for (size_t i = 0; i < lines.size(); ++i)
		{
			Vec4i l = lines[i];
			if (isInFrame(l, frame.cols, frame.rows))
				if (l[0] <= (frame.cols / 2) && l[2] <= (frame.cols / 2))
				{
					llines.push_back(Point(l[0], l[1]));
					llines.push_back(Point(l[2], l[3]));
				}
				else if (l[0] > (frame.cols / 2) && l[2] > (frame.cols / 2))
				{
					rlines.push_back(Point(l[0], l[1]));
					rlines.push_back(Point(l[2], l[3]));
				}

			
		}

		int lminx = 10000, lminy = 10000, lmaxx = -1000, lmaxy = -1000;
		int rminx = 10000, rminy = 10000, rmaxx = -1000, rmaxy = -1000;
		
		/* 
		for (size_t i = 0; i < llines.size(); ++i)
		{
			Point l = llines[i];
			if (lminy > l.y)
			{
				lminx = l.x;
				lminy = l.y;
			}
			
			if (lmaxy < l.y)
			{
				lmaxx = l.x;
				lmaxy = l.y;
			}
			
		}

		for (size_t i = 0; i < rlines.size(); ++i)
		{
			Point r = rlines[i];
			if (rminy > r.y)
			{
				rminx = r.x;
				rminy = r.y;
			}

			if (rmaxy < r.y)
			{
				rmaxx = r.x;
				rmaxy = r.y;
			}
		}
		*/
		LineFit left(llines);
		LineFit right(rlines);
			
		lminy = frame.rows;
		lminx = (lminy - left.getB()) / (left.getA());
		lmaxy = roiparams.p1y+50;
		lmaxx = (lmaxy - left.getB()) / (left.getA());
	
		rminy = frame.rows;
		rminx = (rminy -right.getB()) / right.getA();
		rmaxy = roiparams.p2y+50;
		rmaxx = (rmaxy - right.getB()) / right.getA();


		if(llines.size()>0)
			line(dst, Point(lminx, lminy), Point(lmaxx, lmaxy), Scalar(0, 0, 255), 3, CV_AA);
		if (rlines.size()>0)
			line(dst, Point(rminx, rminy), Point(rmaxx, rmaxy), Scalar(0, 255, 0), 3, CV_AA);
		
	}
	
	return dst;
	
}
