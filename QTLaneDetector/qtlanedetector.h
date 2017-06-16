#ifndef QTLANEDETECTOR_H
#define QTLANEDETECTOR_H

#include <QtWidgets/QMainWindow>
#include <QtWidgets/QFileDialog>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QMessageBox>
#include "player.h"
#include <string>
#include "parameters.h"
#include "ui_qtlanedetector.h"
#include <fstream>
#include <iomanip>

class QTLaneDetector : public QMainWindow
{
	Q_OBJECT

public:
	QTLaneDetector(QWidget *parent = 0);
	~QTLaneDetector();
	parameters getParams() { return params; };

private slots:
	void updatePlayerUI(QImage img);
	void updatePlayerUI2(int f, int fr, int al);
	void enableButtons();
	void on_pushButton_clicked();
	void on_pushButton_2_clicked();
	

private:
	void setReadonly(bool v);
	void updateParams();
	Ui::QTLaneDetectorClass ui;
	Player* myPlayer;
	parameters params;
	HLparameters hlparams;
	ROIparams roiparams;
};

#endif
