/********************************************************************************
** Form generated from reading UI file 'qtlanedetector.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTLANEDETECTOR_H
#define UI_QTLANEDETECTOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTLaneDetectorClass
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QCheckBox *checkBox;
    QLabel *label;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QPushButton *pushButton;
    QGroupBox *groupBox_3;
    QFrame *frame_3;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_8;
    QSpinBox *rho;
    QLabel *label_9;
    QSpinBox *theta;
    QLabel *label_14;
    QSpinBox *thresh;
    QLabel *label_15;
    QSpinBox *minline;
    QLabel *label_16;
    QSpinBox *maxline;
    QTabWidget *tabWidget;
    QWidget *tab;
    QGroupBox *groupBox;
    QFrame *frame;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QSpinBox *wmin;
    QSpinBox *wmax;
    QSlider *maxBrightness;
    QSlider *minBrightness;
    QLabel *label_5;
    QLabel *label_4;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_6;
    QLabel *label_12;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QGridLayout *gridLayout_2;
    QSpinBox *h1;
    QSpinBox *s1;
    QSpinBox *v1;
    QSpinBox *h2;
    QSpinBox *s2;
    QSpinBox *v2;
    QGroupBox *groupBox_4;
    QCheckBox *checkBox_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_4;
    QLabel *label_17;
    QSpinBox *p1x;
    QSpinBox *p1y;
    QLabel *label_18;
    QSpinBox *p2y;
    QSpinBox *p2x;
    QLabel *label_19;
    QLabel *label_3;
    QCheckBox *checkBox_3;
    QLabel *label_20;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTLaneDetectorClass)
    {
        if (QTLaneDetectorClass->objectName().isEmpty())
            QTLaneDetectorClass->setObjectName(QStringLiteral("QTLaneDetectorClass"));
        QTLaneDetectorClass->resize(698, 507);
        QTLaneDetectorClass->setStyleSheet(QStringLiteral("background-color: #5995f7;"));
        centralWidget = new QWidget(QTLaneDetectorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 340, 75, 23));
        checkBox = new QCheckBox(centralWidget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setGeometry(QRect(10, 380, 91, 17));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 331, 281));
        label->setStyleSheet(QStringLiteral("Background-color: #000;"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(260, 340, 111, 21));
        label_2->setStyleSheet(QStringLiteral("Background-color: #457ad1;"));
        horizontalSlider = new QSlider(centralWidget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setEnabled(false);
        horizontalSlider->setGeometry(QRect(90, 340, 160, 22));
        horizontalSlider->setMaximum(100);
        horizontalSlider->setSingleStep(2);
        horizontalSlider->setOrientation(Qt::Horizontal);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(580, 430, 61, 21));
        QPalette palette;
        QBrush brush(QColor(69, 122, 209, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        pushButton->setPalette(palette);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QStringLiteral("background-color: #457ad1; "));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(390, 200, 141, 161));
        frame_3 = new QFrame(groupBox_3);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(10, 20, 121, 131));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        layoutWidget = new QWidget(frame_3);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 109, 126));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_8);

        rho = new QSpinBox(layoutWidget);
        rho->setObjectName(QStringLiteral("rho"));
        rho->setMaximum(50);
        rho->setValue(2);

        formLayout->setWidget(0, QFormLayout::FieldRole, rho);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_9);

        theta = new QSpinBox(layoutWidget);
        theta->setObjectName(QStringLiteral("theta"));
        theta->setMaximum(360);
        theta->setValue(1);

        formLayout->setWidget(1, QFormLayout::FieldRole, theta);

        label_14 = new QLabel(layoutWidget);
        label_14->setObjectName(QStringLiteral("label_14"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_14);

        thresh = new QSpinBox(layoutWidget);
        thresh->setObjectName(QStringLiteral("thresh"));
        thresh->setMinimum(10);
        thresh->setMaximum(300);
        thresh->setValue(25);

        formLayout->setWidget(2, QFormLayout::FieldRole, thresh);

        label_15 = new QLabel(layoutWidget);
        label_15->setObjectName(QStringLiteral("label_15"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_15);

        minline = new QSpinBox(layoutWidget);
        minline->setObjectName(QStringLiteral("minline"));
        minline->setMinimum(5);
        minline->setMaximum(200);
        minline->setValue(30);

        formLayout->setWidget(3, QFormLayout::FieldRole, minline);

        label_16 = new QLabel(layoutWidget);
        label_16->setObjectName(QStringLiteral("label_16"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_16);

        maxline = new QSpinBox(layoutWidget);
        maxline->setObjectName(QStringLiteral("maxline"));
        maxline->setMinimum(5);
        maxline->setMaximum(200);
        maxline->setValue(15);

        formLayout->setWidget(4, QFormLayout::FieldRole, maxline);

        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(390, 10, 261, 181));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        groupBox = new QGroupBox(tab);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 221, 131));
        frame = new QFrame(groupBox);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 20, 211, 101));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        layoutWidget1 = new QWidget(frame);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 171, 91));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        wmin = new QSpinBox(layoutWidget1);
        wmin->setObjectName(QStringLiteral("wmin"));
        wmin->setMaximum(254);
        wmin->setValue(210);

        gridLayout->addWidget(wmin, 2, 0, 1, 1);

        wmax = new QSpinBox(layoutWidget1);
        wmax->setObjectName(QStringLiteral("wmax"));
        wmax->setMaximum(255);
        wmax->setValue(255);

        gridLayout->addWidget(wmax, 2, 1, 1, 2);

        maxBrightness = new QSlider(layoutWidget1);
        maxBrightness->setObjectName(QStringLiteral("maxBrightness"));
        maxBrightness->setMaximum(255);
        maxBrightness->setValue(255);
        maxBrightness->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(maxBrightness, 1, 1, 1, 2);

        minBrightness = new QSlider(layoutWidget1);
        minBrightness->setObjectName(QStringLiteral("minBrightness"));
        minBrightness->setMaximum(255);
        minBrightness->setValue(210);
        minBrightness->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(minBrightness, 1, 0, 1, 1);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setLineWidth(2);

        gridLayout->addWidget(label_5, 0, 1, 1, 2);

        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setLineWidth(2);

        gridLayout->addWidget(label_4, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(10, 10, 251, 111));
        frame_2 = new QFrame(groupBox_2);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(10, 20, 230, 89));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout->addWidget(label_6);

        label_12 = new QLabel(frame_2);
        label_12->setObjectName(QStringLiteral("label_12"));

        verticalLayout->addWidget(label_12);

        label_13 = new QLabel(frame_2);
        label_13->setObjectName(QStringLiteral("label_13"));

        verticalLayout->addWidget(label_13);


        gridLayout_3->addLayout(verticalLayout, 0, 0, 2, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout->addWidget(label_7);

        label_10 = new QLabel(frame_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        label_11 = new QLabel(frame_2);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout->addWidget(label_11);


        gridLayout_3->addLayout(horizontalLayout, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        h1 = new QSpinBox(frame_2);
        h1->setObjectName(QStringLiteral("h1"));
        h1->setMinimum(0);
        h1->setMaximum(179);
        h1->setValue(18);

        gridLayout_2->addWidget(h1, 0, 0, 1, 1);

        s1 = new QSpinBox(frame_2);
        s1->setObjectName(QStringLiteral("s1"));
        s1->setMaximum(255);
        s1->setValue(100);

        gridLayout_2->addWidget(s1, 0, 1, 1, 1);

        v1 = new QSpinBox(frame_2);
        v1->setObjectName(QStringLiteral("v1"));
        v1->setMaximum(255);
        v1->setValue(100);

        gridLayout_2->addWidget(v1, 0, 2, 1, 1);

        h2 = new QSpinBox(frame_2);
        h2->setObjectName(QStringLiteral("h2"));
        h2->setMaximum(179);
        h2->setValue(30);

        gridLayout_2->addWidget(h2, 1, 0, 1, 1);

        s2 = new QSpinBox(frame_2);
        s2->setObjectName(QStringLiteral("s2"));
        s2->setMaximum(255);
        s2->setValue(255);

        gridLayout_2->addWidget(s2, 1, 1, 1, 1);

        v2 = new QSpinBox(frame_2);
        v2->setObjectName(QStringLiteral("v2"));
        v2->setMaximum(255);
        v2->setValue(255);

        gridLayout_2->addWidget(v2, 1, 2, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 1, 1, 1, 1);

        tabWidget->addTab(tab_2, QString());
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(540, 200, 141, 151));
        checkBox_2 = new QCheckBox(groupBox_4);
        checkBox_2->setObjectName(QStringLiteral("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 20, 81, 17));
        widget = new QWidget(groupBox_4);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 126, 92));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        label_17 = new QLabel(widget);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_4->addWidget(label_17, 3, 0, 1, 1);

        p1x = new QSpinBox(widget);
        p1x->setObjectName(QStringLiteral("p1x"));
        p1x->setEnabled(false);
        p1x->setMaximum(1500);
        p1x->setValue(450);

        gridLayout_4->addWidget(p1x, 3, 1, 1, 1);

        p1y = new QSpinBox(widget);
        p1y->setObjectName(QStringLiteral("p1y"));
        p1y->setEnabled(false);
        p1y->setMaximum(1500);
        p1y->setValue(320);

        gridLayout_4->addWidget(p1y, 3, 2, 1, 1);

        label_18 = new QLabel(widget);
        label_18->setObjectName(QStringLiteral("label_18"));

        gridLayout_4->addWidget(label_18, 4, 0, 1, 1);

        p2y = new QSpinBox(widget);
        p2y->setObjectName(QStringLiteral("p2y"));
        p2y->setEnabled(false);
        p2y->setMaximum(1500);
        p2y->setValue(320);

        gridLayout_4->addWidget(p2y, 4, 2, 1, 1);

        p2x = new QSpinBox(widget);
        p2x->setObjectName(QStringLiteral("p2x"));
        p2x->setEnabled(false);
        p2x->setMaximum(1500);
        p2x->setValue(490);

        gridLayout_4->addWidget(p2x, 4, 1, 1, 1);

        label_19 = new QLabel(widget);
        label_19->setObjectName(QStringLiteral("label_19"));

        gridLayout_4->addWidget(label_19, 2, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_4->addWidget(label_3, 2, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_4);

        checkBox_3 = new QCheckBox(widget);
        checkBox_3->setObjectName(QStringLiteral("checkBox_3"));
        checkBox_3->setEnabled(false);

        verticalLayout_2->addWidget(checkBox_3);

        label_20 = new QLabel(centralWidget);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(0, 330, 381, 41));
        label_20->setStyleSheet(QStringLiteral("background-color: navy;"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(110, 380, 531, 41));
        plainTextEdit->setStyleSheet(QStringLiteral("background-color: #457ad1; "));
        plainTextEdit->setReadOnly(true);
        QTLaneDetectorClass->setCentralWidget(centralWidget);
        label_20->raise();
        pushButton_2->raise();
        checkBox->raise();
        label->raise();
        label_2->raise();
        horizontalSlider->raise();
        pushButton->raise();
        groupBox_3->raise();
        tabWidget->raise();
        groupBox_4->raise();
        plainTextEdit->raise();
        menuBar = new QMenuBar(QTLaneDetectorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 698, 21));
        QTLaneDetectorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QTLaneDetectorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        QTLaneDetectorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QTLaneDetectorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTLaneDetectorClass->setStatusBar(statusBar);

        retranslateUi(QTLaneDetectorClass);
        QObject::connect(minBrightness, SIGNAL(valueChanged(int)), wmin, SLOT(setValue(int)));
        QObject::connect(wmin, SIGNAL(valueChanged(int)), minBrightness, SLOT(setValue(int)));
        QObject::connect(maxBrightness, SIGNAL(valueChanged(int)), wmax, SLOT(setValue(int)));
        QObject::connect(wmax, SIGNAL(valueChanged(int)), maxBrightness, SLOT(setValue(int)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), p1x, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), p2x, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), p1y, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), p2y, SLOT(setEnabled(bool)));
        QObject::connect(checkBox_2, SIGNAL(toggled(bool)), checkBox_3, SLOT(setEnabled(bool)));

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QTLaneDetectorClass);
    } // setupUi

    void retranslateUi(QMainWindow *QTLaneDetectorClass)
    {
        QTLaneDetectorClass->setWindowTitle(QApplication::translate("QTLaneDetectorClass", "QTLaneDetector", 0));
        pushButton_2->setText(QApplication::translate("QTLaneDetectorClass", "Play", 0));
        checkBox->setText(QApplication::translate("QTLaneDetectorClass", "Detect Mode", 0));
        label->setText(QString());
        label_2->setText(QString());
        pushButton->setText(QApplication::translate("QTLaneDetectorClass", "Load", 0));
        groupBox_3->setTitle(QApplication::translate("QTLaneDetectorClass", "HL parameters", 0));
        label_8->setText(QApplication::translate("QTLaneDetectorClass", "Rho", 0));
        label_9->setText(QApplication::translate("QTLaneDetectorClass", "Theta", 0));
        label_14->setText(QApplication::translate("QTLaneDetectorClass", "Thresh", 0));
        label_15->setText(QApplication::translate("QTLaneDetectorClass", "MinLine", 0));
        label_16->setText(QApplication::translate("QTLaneDetectorClass", "MaxLineGap", 0));
        groupBox->setTitle(QApplication::translate("QTLaneDetectorClass", "White Detector", 0));
        label_5->setText(QApplication::translate("QTLaneDetectorClass", "Brightness 2", 0));
        label_4->setText(QApplication::translate("QTLaneDetectorClass", " Brightness 1", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("QTLaneDetectorClass", "White", 0));
        groupBox_2->setTitle(QApplication::translate("QTLaneDetectorClass", "Yellow Detector", 0));
        label_6->setText(QString());
        label_12->setText(QApplication::translate("QTLaneDetectorClass", "Minimum", 0));
        label_13->setText(QApplication::translate("QTLaneDetectorClass", "Maximum", 0));
        label_7->setText(QApplication::translate("QTLaneDetectorClass", "Hue", 0));
        label_10->setText(QApplication::translate("QTLaneDetectorClass", "Sat", 0));
        label_11->setText(QApplication::translate("QTLaneDetectorClass", "Val", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("QTLaneDetectorClass", "Yellow", 0));
        groupBox_4->setTitle(QApplication::translate("QTLaneDetectorClass", "ROI upper points", 0));
        checkBox_2->setText(QApplication::translate("QTLaneDetectorClass", "Turn on ROI", 0));
        label_17->setText(QApplication::translate("QTLaneDetectorClass", "P1", 0));
        label_18->setText(QApplication::translate("QTLaneDetectorClass", "P2", 0));
        label_19->setText(QApplication::translate("QTLaneDetectorClass", "   Y", 0));
        label_3->setText(QApplication::translate("QTLaneDetectorClass", "    X", 0));
        checkBox_3->setText(QApplication::translate("QTLaneDetectorClass", "Mark lane", 0));
        label_20->setText(QString());
        plainTextEdit->setPlainText(QApplication::translate("QTLaneDetectorClass", "Filename:\n"
"Size: \n"
"", 0));
    } // retranslateUi

};

namespace Ui {
    class QTLaneDetectorClass: public Ui_QTLaneDetectorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTLANEDETECTOR_H
