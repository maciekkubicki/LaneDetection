#include "player.h"
#include <ctime>
#include <fstream>
#include <LaneDetector.h>


Player::Player(QObject *parent)
	: QThread(parent)
{
	stop = true;
	loaded = false;
}


void sleepcp(int milliseconds) 
{
	clock_t time_end;
	time_end = clock() + milliseconds * CLOCKS_PER_SEC / 1000;
	while (clock() < time_end)
	{
	}
}

Size Player::getSize()//size of video
{
	if (present_filename != "")
	{
		VideoCapture cap(present_filename);
		return Size(cap.get(CV_CAP_PROP_FRAME_WIDTH), cap.get(CV_CAP_PROP_FRAME_HEIGHT));
	}
	else return Size(0,0);
}

bool Player::loadVideo(std::string filename)//video loading
{
	capture.open(filename);
	if (capture.isOpened())
	{
		frameRate = (int)capture.get(CV_CAP_PROP_FPS);
		present_filename = filename;
		numOfFrame = 0;
		int numOfFrames = countFrames();
		emit processedFrame(numOfFrame, frameRate, numOfFrames);
		return true;
	}
	else
		return false;
}

int Player::countFrames()//number of frames in video
{
	if (present_filename != "")
	{
		VideoCapture cap(present_filename);
		return int(cap.get(CAP_PROP_FRAME_COUNT));
	}
	else return 0;
}



void Player::Play(parameters p, HLparameters hlp, ROIparams roi)
{
	roiparams = roi;
	params = p;
	hlparams = hlp;
	if (!isRunning()) {
		if (isStopped()) {
			stop = false;
		}
		start(LowPriority);
	}
}

void Player::run()
{
	int delay = (1000 / frameRate);
	int numOfFrames = countFrames();
	roiparams.p3x = capture.get(CV_CAP_PROP_FRAME_WIDTH);
	roiparams.p3y = capture.get(CV_CAP_PROP_FRAME_HEIGHT);
	roiparams.p4x = 0;
	roiparams.p4y = capture.get(CV_CAP_PROP_FRAME_HEIGHT);
	//int numOfFrame = 1;
	//numOfFrame++;
	
	while (!stop) {
		if (!capture.read(frame))
		{
			stop = true;
			loadVideo(present_filename);
			emit endOfVideo();
			//img = QImage();
		}
		if (frame.channels() == 3) {
			
			cv::cvtColor(frame, RGBframe, CV_BGR2RGB);
			if (params.detect && frame.size().width>0)
				RGBframe = LaneDetector::Detect(RGBframe,params,hlparams, roiparams);
			img = QImage((const unsigned char*)(RGBframe.data),
				RGBframe.cols, RGBframe.rows, QImage::Format_RGB888);// QImage::Format_RGB888
		}
		else
		{
			img = QImage((const unsigned char*)(frame.data),
				frame.cols, frame.rows, QImage::Format_Indexed8);
		}

		
		//imshow("test", frame);
		emit processedImage(img);
		emit processedFrame(numOfFrame, frameRate, numOfFrames);
		
		++numOfFrame;
		this->msleep(delay);
		//imshow("test",frame);
		
		//waitKey();


	}


}

Player::~Player()
{

	mutex.lock();
	stop = true;
	capture.release();
	condition.wakeOne();
	mutex.unlock();
	wait();

}
void Player::Stop()
{
	stop = true;
}

void Player::msleep(int ms) {
	struct timespec ts = { ms / 1000, (ms % 1000) * 1000 * 1000 };
	sleepcp(ms);
}

bool Player::isStopped() const {
	return this->stop;
}


