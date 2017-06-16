#pragma once



struct parameters//color detecotor parameters
{
	double width;
	bool detect;
	int wmin;
	int wmax;
	int h1;
	int h2;
	int s1;
	int s2;
	int v1;
	int v2;
};

struct HLparameters//hough lines parameters
{
	int rho;
	double theta;
	int threshold;
	int minLine;
	int maxLineGap;
};

struct ROIparams//seting ROI parameters
{
	bool use;
	bool mark;
	int p1x;
	int p2x;
	int p3x;
	int p4x;
	int p1y;
	int p2y;
	int p3y;
	int p4y;
};