#include "qtlanedetector.h"
#include "LaneDetector.h"
#include <iostream>
#include <QtWidgets/QApplication>
using namespace std;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QTLaneDetector w;

	//w.setAttribute(Qt::WA_DeleteOnClose, true);
	w.show();	
	return a.exec();
}
