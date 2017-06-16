#include "qtlanedetector.h"
#include <sstream>

QTLaneDetector::QTLaneDetector(QWidget *parent)
	: QMainWindow(parent)
{
	myPlayer = new Player();
	QObject::connect(myPlayer, SIGNAL(processedImage(QImage)),
	this, SLOT(updatePlayerUI(QImage)));

	QObject::connect(myPlayer, SIGNAL(processedFrame(int, int ,int)),
	this, SLOT(updatePlayerUI2(int, int, int)));

	QObject::connect(myPlayer, SIGNAL(endOfVideo()), this, SLOT(enableButtons()));

	


	ui.setupUi(this);
	

	
}



void QTLaneDetector::enableButtons()
{
	setReadonly(false);
}

QTLaneDetector::~QTLaneDetector()
{
	delete myPlayer;
}

void QTLaneDetector::updatePlayerUI2(int f, int fr, int al)
{
	ui.horizontalSlider->setValue(((float)f / al) * 100);
	std::ostringstream ss;
	ss << std::fixed;
	ss << std::setprecision(2);
	ss <<"  "<< (float)(f) / fr << " [s] / " << (float)al / fr << " [s]";
	std::string s(ss.str());
	ui.label_2->setText(QString::fromStdString(s));

}

void QTLaneDetector::updatePlayerUI(QImage img)
{
	if (!img.isNull())
	{
		ui.label->setAlignment(Qt::AlignCenter);
		ui.label->setPixmap(QPixmap::fromImage(img).scaled(ui.label->size(), Qt::KeepAspectRatio, Qt::FastTransformation));
	}
	else
	{
		ui.pushButton_2->setText(tr("Play Again"));
	}

}


void QTLaneDetector::on_pushButton_clicked()//loader
{

	QString filename = QFileDialog::getOpenFileName(this,
		tr("Open Video"), ".",
		tr("Video Files (*.avi *.mpg *.mp4)"));

	if (!filename.isEmpty()) {
		if (!myPlayer->loadVideo(filename.toStdString()))
		{
			QMessageBox msgBox;
			msgBox.setText("The selected video could not be opened!");
			msgBox.exec();
		}
		else
		{
			myPlayer->Load();
			ui.pushButton_2->setText(tr("Play"));
			std::stringstream ss;
			ss << "Filename: " << filename.toStdString() << std::endl;
			ss << "Size: " << myPlayer->getSize() << std::endl;
			ui.plainTextEdit->document()->setPlainText(QString::fromStdString(ss.str()));
		}
	}

}

void QTLaneDetector::on_pushButton_2_clicked()//player button
{
	if (myPlayer->isStopped() && myPlayer->isLoaded())
	{
		updateParams();
		setReadonly(true);
		myPlayer->Play(params,hlparams, roiparams);
		ui.pushButton_2->setText(tr("Stop"));
	}
	else
	{
		setReadonly(false);
		myPlayer->Stop();
		ui.pushButton_2->setText(tr("Play"));
	}
}

void QTLaneDetector::updateParams()
{

	params.wmin = ui.wmin->value();
	params.wmax = ui.wmax->value();
	params.h1 = ui.h1->value();
	params.h2 = ui.h2->value();
	params.s1 = ui.s1->value();
	params.s2 = ui.s2->value();
	params.v1 = ui.v1->value();
	params.v2 = ui.v2->value();
	params.detect = ui.checkBox->isChecked();
	hlparams.rho = ui.rho->value();
	hlparams.theta = ui.theta->value();
	hlparams.threshold = ui.thresh->value();
	hlparams.minLine = ui.minline->value();
	hlparams.maxLineGap = ui.maxline->value();
	roiparams.p1x = ui.p1x->value();
	roiparams.p2x = ui.p2x->value();
	roiparams.p1y = ui.p1y->value();
	roiparams.p2y = ui.p2y->value();
	roiparams.use = ui.checkBox_2->isChecked();
	roiparams.mark = ui.checkBox_3->isChecked();
}

void QTLaneDetector::setReadonly(bool v)
{
	ui.wmin->setEnabled(!v);
	ui.wmax->setEnabled(!v);
	ui.h1->setEnabled(!v);
	ui.h2->setEnabled(!v);
	ui.s1->setEnabled(!v);
	ui.s2->setEnabled(!v);
	ui.v1->setEnabled(!v);
	ui.v2->setEnabled(!v);
	ui.rho->setEnabled(!v);
	ui.theta->setEnabled(!v);
	ui.thresh->setEnabled(!v);
	ui.minline->setEnabled(!v);
	ui.maxline->setEnabled(!v);
	ui.checkBox->setEnabled(!v);
	ui.checkBox_2->setEnabled(!v);
	ui.checkBox_3->setEnabled(!v);
	
	if (ui.checkBox_2->isChecked())
	{
		ui.p1x->setEnabled(!v);
		ui.p2x->setEnabled(!v);
		ui.p1y->setEnabled(!v);
		ui.p2y->setEnabled(!v);
		ui.checkBox_2->setEnabled(!v);
	}
	
	

}