#include "LineFit.h"



LineFit::LineFit(std::vector<Point> v)
{
	double xi = 0; 
	double yi = 0;
	double xi2 = 0;
	double xyi = 0;


	for (size_t i = 0; i < v.size(); ++i)
	{
		xi += v[i].x;
		yi += v[i].y;
		xi2 += pow(v[i].x, 2);
		xyi += v[i].x*v[i].y;

	}
	a = (v.size()*xyi - xi*yi) / (v.size()*xi2 - xi*xi);
	b = (xi2*yi - xi*xyi) / (xi2*v.size() - xi*xi);

}


LineFit::~LineFit()
{
}
