#ifndef PLAYER_H
#define PLAYER_H
#include <QMutex>
#include <QThread>
#include <QImage>
#include <QWaitCondition>
#include <string>
#include <time.h>
#include "parameters.h"
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
class Player : public QThread
{
	Q_OBJECT
private:
	bool stop;
	
	QMutex mutex;
	QWaitCondition condition;
	Mat frame;
	int frameRate;
	bool loaded;
	VideoCapture capture;
	Mat RGBframe;
	QImage img;
	std::string present_filename;
	parameters params;
	HLparameters hlparams;
	ROIparams roiparams;
	int numOfFrame;
signals:
	void processedImage(const QImage &image);
	void processedFrame(const int f, const int fr, const int al);
	void endOfVideo();
protected:
	void run();
	void msleep(int ms);
public:
	
	void Load() { loaded = true; };
	bool isLoaded() { return loaded; };
	Size getSize();
	Player(QObject *parent = 0);
	~Player();
	bool loadVideo(std::string filename);
	void Play(parameters p,HLparameters hlp, ROIparams roi);
	void Stop();
	bool isStopped() const;
	int countFrames();
};




#endif // VIDEOPLAYER_H

