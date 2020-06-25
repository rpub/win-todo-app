/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *centralwidget;
    QFrame *currentFrame;
    QLabel *cityLBL_3;
    QLabel *cityLBL_4;
    QLabel *cityLBL_5;
    QWidget *widget_5;
    QWidget *widget_11;
    QLabel *F1_2;
    QLabel *tempLBL;
    QLabel *Low_2;
    QLabel *lowLBL;
    QLabel *High_10;
    QLabel *highLBL;
    QLabel *humidityLBL_2;
    QLabel *humidityLBL;
    QLabel *cityLBL;
    QLabel *weatherIcon;
    QLabel *descLBL;
    QPushButton *quit_BTN;
    QFrame *frame_2;
    QLabel *imgLBL;
    QPushButton *addIMG;
    QLabel *cityLBL_2;
    QLabel *staticIMG_0;
    QLabel *staticIMG_1;
    QLabel *staticIMG_2;
    QLabel *cityLBL_7;
    QLabel *cityLBL_8;
    QLabel *cityLBL_22;
    QFrame *frame_3;
    QLCDNumber *secondLCD;
    QLCDNumber *hourLCD;
    QLabel *label_36;
    QLCDNumber *minuteLCD;
    QLabel *label_32;
    QLabel *clockIMG_LBL;
    QPushButton *teleportBttn;
    QLabel *mapLBL;
    QFrame *frame_6;
    QLabel *chinaFlag_LBL;
    QLabel *franceFlag_LBL;
    QWidget *widget_6;
    QLCDNumber *secondLCD_Paris;
    QLCDNumber *hourLCD_Paris;
    QLCDNumber *minuteLCD_Paris;
    QLabel *label_68;
    QLabel *label_67;
    QWidget *widget_7;
    QLCDNumber *secondLCD_Lima;
    QLCDNumber *hourLCD_Lima;
    QLCDNumber *minuteLCD_Lima;
    QLabel *label_73;
    QLabel *label_74;
    QWidget *widget_10;
    QLCDNumber *secondLCD_Bejing;
    QLCDNumber *hourLCD_Bejing;
    QLCDNumber *minuteLCD_Bejing;
    QLabel *label_75;
    QLabel *label_76;
    QLabel *peruFlag_LBL;
    QLabel *label_71;
    QLabel *label_72;
    QLabel *label_77;
    QLabel *welcomeLBL;
    QFrame *frame_8;
    QLabel *label_20;
    QPushButton *addTasks;
    QLabel *cityLBL_9;
    QTableView *tasksTable;
    QLabel *globeIcon;
    QMenuBar *menubar;

    void setupUi(QMainWindow *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        Dashboard->resize(1329, 889);
        Dashboard->setStyleSheet(QString::fromUtf8("background-color: #ffffff;"));
        centralwidget = new QWidget(Dashboard);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        currentFrame = new QFrame(centralwidget);
        currentFrame->setObjectName(QString::fromUtf8("currentFrame"));
        currentFrame->setGeometry(QRect(840, 10, 481, 661));
        currentFrame->setStyleSheet(QString::fromUtf8("background-color: #24252f;\n"
"border-top-left-radius: 0;\n"
"border-top-right-radius: 25;\n"
"border-bottom-right-radius: 0;\n"
"border-bottom-left-radius: 0;"));
        currentFrame->setFrameShape(QFrame::StyledPanel);
        currentFrame->setFrameShadow(QFrame::Raised);
        cityLBL_3 = new QLabel(currentFrame);
        cityLBL_3->setObjectName(QString::fromUtf8("cityLBL_3"));
        cityLBL_3->setGeometry(QRect(20, 30, 111, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font.setPointSize(12);
        font.setBold(false);
        font.setWeight(50);
        cityLBL_3->setFont(font);
        cityLBL_3->setLayoutDirection(Qt::LeftToRight);
        cityLBL_3->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        cityLBL_3->setAlignment(Qt::AlignCenter);
        cityLBL_4 = new QLabel(currentFrame);
        cityLBL_4->setObjectName(QString::fromUtf8("cityLBL_4"));
        cityLBL_4->setGeometry(QRect(160, 30, 81, 41));
        cityLBL_4->setFont(font);
        cityLBL_4->setLayoutDirection(Qt::LeftToRight);
        cityLBL_4->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        cityLBL_4->setAlignment(Qt::AlignCenter);
        cityLBL_5 = new QLabel(currentFrame);
        cityLBL_5->setObjectName(QString::fromUtf8("cityLBL_5"));
        cityLBL_5->setGeometry(QRect(270, 30, 81, 41));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        cityLBL_5->setFont(font1);
        cityLBL_5->setLayoutDirection(Qt::LeftToRight);
        cityLBL_5->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        cityLBL_5->setAlignment(Qt::AlignCenter);
        widget_5 = new QWidget(currentFrame);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(10, 100, 461, 521));
        widget_11 = new QWidget(widget_5);
        widget_11->setObjectName(QString::fromUtf8("widget_11"));
        widget_11->setGeometry(QRect(20, 100, 421, 111));
        F1_2 = new QLabel(widget_11);
        F1_2->setObjectName(QString::fromUtf8("F1_2"));
        F1_2->setGeometry(QRect(190, 10, 31, 41));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font2.setPointSize(14);
        F1_2->setFont(font2);
        F1_2->setLayoutDirection(Qt::LeftToRight);
        F1_2->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        F1_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        F1_2->setWordWrap(false);
        tempLBL = new QLabel(widget_11);
        tempLBL->setObjectName(QString::fromUtf8("tempLBL"));
        tempLBL->setGeometry(QRect(60, 10, 131, 91));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font3.setPointSize(84);
        font3.setBold(false);
        font3.setWeight(50);
        tempLBL->setFont(font3);
        tempLBL->setLayoutDirection(Qt::LeftToRight);
        tempLBL->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        tempLBL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        Low_2 = new QLabel(widget_11);
        Low_2->setObjectName(QString::fromUtf8("Low_2"));
        Low_2->setGeometry(QRect(230, 10, 71, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font4.setPointSize(14);
        font4.setBold(true);
        font4.setWeight(75);
        Low_2->setFont(font4);
        Low_2->setLayoutDirection(Qt::LeftToRight);
        Low_2->setStyleSheet(QString::fromUtf8("color: #f8f8f8;"));
        Low_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        lowLBL = new QLabel(widget_11);
        lowLBL->setObjectName(QString::fromUtf8("lowLBL"));
        lowLBL->setGeometry(QRect(290, 10, 51, 31));
        QFont font5;
        font5.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font5.setPointSize(14);
        font5.setBold(false);
        font5.setWeight(50);
        lowLBL->setFont(font5);
        lowLBL->setLayoutDirection(Qt::LeftToRight);
        lowLBL->setStyleSheet(QString::fromUtf8("color: #f8f8f8;"));
        lowLBL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        High_10 = new QLabel(widget_11);
        High_10->setObjectName(QString::fromUtf8("High_10"));
        High_10->setGeometry(QRect(230, 40, 71, 31));
        High_10->setFont(font4);
        High_10->setLayoutDirection(Qt::LeftToRight);
        High_10->setStyleSheet(QString::fromUtf8("color: #f8f8f8;"));
        High_10->setTextFormat(Qt::MarkdownText);
        High_10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        highLBL = new QLabel(widget_11);
        highLBL->setObjectName(QString::fromUtf8("highLBL"));
        highLBL->setGeometry(QRect(290, 40, 51, 31));
        highLBL->setFont(font5);
        highLBL->setLayoutDirection(Qt::LeftToRight);
        highLBL->setStyleSheet(QString::fromUtf8("color: #f8f8f8;"));
        highLBL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        humidityLBL_2 = new QLabel(widget_11);
        humidityLBL_2->setObjectName(QString::fromUtf8("humidityLBL_2"));
        humidityLBL_2->setGeometry(QRect(230, 70, 91, 31));
        QFont font6;
        font6.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font6.setPointSize(14);
        font6.setBold(true);
        font6.setItalic(false);
        font6.setWeight(75);
        font6.setKerning(true);
        humidityLBL_2->setFont(font6);
        humidityLBL_2->setLayoutDirection(Qt::LeftToRight);
        humidityLBL_2->setStyleSheet(QString::fromUtf8("color: #f8f8f8;"));
        humidityLBL_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        humidityLBL = new QLabel(widget_11);
        humidityLBL->setObjectName(QString::fromUtf8("humidityLBL"));
        humidityLBL->setGeometry(QRect(330, 70, 41, 31));
        humidityLBL->setFont(font5);
        humidityLBL->setLayoutDirection(Qt::LeftToRight);
        humidityLBL->setStyleSheet(QString::fromUtf8("color: #f8f8f8;"));
        humidityLBL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        cityLBL = new QLabel(widget_5);
        cityLBL->setObjectName(QString::fromUtf8("cityLBL"));
        cityLBL->setGeometry(QRect(60, 230, 251, 41));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font7.setPointSize(16);
        font7.setBold(true);
        font7.setWeight(75);
        cityLBL->setFont(font7);
        cityLBL->setLayoutDirection(Qt::LeftToRight);
        cityLBL->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        cityLBL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        weatherIcon = new QLabel(widget_5);
        weatherIcon->setObjectName(QString::fromUtf8("weatherIcon"));
        weatherIcon->setGeometry(QRect(190, 10, 81, 61));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font8.setPointSize(22);
        font8.setKerning(false);
        weatherIcon->setFont(font8);
        weatherIcon->setLayoutDirection(Qt::LeftToRight);
        weatherIcon->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        weatherIcon->setAlignment(Qt::AlignCenter);
        descLBL = new QLabel(widget_5);
        descLBL->setObjectName(QString::fromUtf8("descLBL"));
        descLBL->setGeometry(QRect(170, 60, 121, 31));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font9.setPointSize(10);
        font9.setBold(false);
        font9.setWeight(50);
        descLBL->setFont(font9);
        descLBL->setLayoutDirection(Qt::LeftToRight);
        descLBL->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgba(0,0,0,0%)"));
        descLBL->setAlignment(Qt::AlignCenter);
        quit_BTN = new QPushButton(currentFrame);
        quit_BTN->setObjectName(QString::fromUtf8("quit_BTN"));
        quit_BTN->setGeometry(QRect(410, 30, 41, 41));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(quit_BTN->sizePolicy().hasHeightForWidth());
        quit_BTN->setSizePolicy(sizePolicy);
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        font10.setWeight(75);
        quit_BTN->setFont(font10);
        quit_BTN->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgb(255, 0, 0);\n"
"border-radius: 7.5;"));
        quit_BTN->setText(QString::fromUtf8("X"));
#if QT_CONFIG(shortcut)
        quit_BTN->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        widget_5->raise();
        cityLBL_3->raise();
        cityLBL_4->raise();
        cityLBL_5->raise();
        quit_BTN->raise();
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 10, 831, 661));
        QFont font11;
        font11.setBold(true);
        font11.setWeight(75);
        frame_2->setFont(font11);
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #66666d;\n"
"border-top-left-radius: 25;\n"
"border-top-right-radius: 0;\n"
"border-bottom-right-radius: 0;\n"
"border-bottom-left-radius: 0;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        imgLBL = new QLabel(frame_2);
        imgLBL->setObjectName(QString::fromUtf8("imgLBL"));
        imgLBL->setGeometry(QRect(140, 230, 591, 331));
        imgLBL->setFont(font2);
        imgLBL->setLayoutDirection(Qt::LeftToRight);
        imgLBL->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgba(0,0,0,50%);\n"
"border-radius: 0;"));
        imgLBL->setAlignment(Qt::AlignCenter);
        addIMG = new QPushButton(frame_2);
        addIMG->setObjectName(QString::fromUtf8("addIMG"));
        addIMG->setGeometry(QRect(740, 430, 61, 61));
        sizePolicy.setHeightForWidth(addIMG->sizePolicy().hasHeightForWidth());
        addIMG->setSizePolicy(sizePolicy);
        addIMG->setFont(font10);
        addIMG->setStyleSheet(QString::fromUtf8("color: #111;\n"
"background-color: rgb(0, 255, 127);\n"
"border-radius:0px;\n"
""));
        addIMG->setText(QString::fromUtf8("+"));
#if QT_CONFIG(shortcut)
        addIMG->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        cityLBL_2 = new QLabel(frame_2);
        cityLBL_2->setObjectName(QString::fromUtf8("cityLBL_2"));
        cityLBL_2->setGeometry(QRect(40, 510, 621, 41));
        QFont font12;
        font12.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font12.setPointSize(30);
        font12.setBold(true);
        font12.setWeight(75);
        cityLBL_2->setFont(font12);
        cityLBL_2->setLayoutDirection(Qt::LeftToRight);
        cityLBL_2->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgba(0,0,0,0%)"));
        cityLBL_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        staticIMG_0 = new QLabel(frame_2);
        staticIMG_0->setObjectName(QString::fromUtf8("staticIMG_0"));
        staticIMG_0->setGeometry(QRect(80, 130, 221, 131));
        staticIMG_0->setFont(font2);
        staticIMG_0->setLayoutDirection(Qt::LeftToRight);
        staticIMG_0->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius: 0;"));
        staticIMG_0->setAlignment(Qt::AlignCenter);
        staticIMG_1 = new QLabel(frame_2);
        staticIMG_1->setObjectName(QString::fromUtf8("staticIMG_1"));
        staticIMG_1->setGeometry(QRect(30, 240, 211, 121));
        staticIMG_1->setFont(font2);
        staticIMG_1->setLayoutDirection(Qt::LeftToRight);
        staticIMG_1->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius: 0;"));
        staticIMG_1->setAlignment(Qt::AlignCenter);
        staticIMG_2 = new QLabel(frame_2);
        staticIMG_2->setObjectName(QString::fromUtf8("staticIMG_2"));
        staticIMG_2->setGeometry(QRect(590, 500, 211, 131));
        staticIMG_2->setFont(font2);
        staticIMG_2->setLayoutDirection(Qt::LeftToRight);
        staticIMG_2->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius: 0;"));
        staticIMG_2->setAlignment(Qt::AlignCenter);
        cityLBL_7 = new QLabel(frame_2);
        cityLBL_7->setObjectName(QString::fromUtf8("cityLBL_7"));
        cityLBL_7->setGeometry(QRect(670, 30, 141, 41));
        cityLBL_7->setFont(font1);
        cityLBL_7->setLayoutDirection(Qt::RightToLeft);
        cityLBL_7->setStyleSheet(QString::fromUtf8("color: #fff;"));
        cityLBL_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        cityLBL_8 = new QLabel(frame_2);
        cityLBL_8->setObjectName(QString::fromUtf8("cityLBL_8"));
        cityLBL_8->setGeometry(QRect(30, 30, 171, 41));
        cityLBL_8->setFont(font1);
        cityLBL_8->setLayoutDirection(Qt::RightToLeft);
        cityLBL_8->setStyleSheet(QString::fromUtf8("color: #24252f;\n"
"background-color: #ffffff;\n"
"border-width:1.5px;\n"
"border-radius:7.5px;"));
        cityLBL_8->setAlignment(Qt::AlignCenter);
        cityLBL_22 = new QLabel(frame_2);
        cityLBL_22->setObjectName(QString::fromUtf8("cityLBL_22"));
        cityLBL_22->setGeometry(QRect(230, 30, 61, 41));
        cityLBL_22->setFont(font1);
        cityLBL_22->setLayoutDirection(Qt::RightToLeft);
        cityLBL_22->setStyleSheet(QString::fromUtf8("color: #fff;"));
        cityLBL_22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(270, 570, 311, 61));
        frame_3->setStyleSheet(QString::fromUtf8("background-color: rgba(0,0,0,0%)"));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        secondLCD = new QLCDNumber(frame_3);
        secondLCD->setObjectName(QString::fromUtf8("secondLCD"));
        secondLCD->setGeometry(QRect(250, 10, 51, 41));
        QFont font13;
        font13.setPointSize(10);
        secondLCD->setFont(font13);
        secondLCD->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border-color: #f6f6f6;\n"
""));
        secondLCD->setDigitCount(2);
        secondLCD->setMode(QLCDNumber::Dec);
        secondLCD->setSegmentStyle(QLCDNumber::Flat);
        secondLCD->setProperty("value", QVariant(22.000000000000000));
        hourLCD = new QLCDNumber(frame_3);
        hourLCD->setObjectName(QString::fromUtf8("hourLCD"));
        hourLCD->setGeometry(QRect(70, 10, 51, 41));
        hourLCD->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border-color: #f6f6f6;\n"
""));
        hourLCD->setDigitCount(2);
        hourLCD->setMode(QLCDNumber::Dec);
        hourLCD->setSegmentStyle(QLCDNumber::Flat);
        hourLCD->setProperty("value", QVariant(22.000000000000000));
        label_36 = new QLabel(frame_3);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setGeometry(QRect(131, 10, 20, 41));
        QFont font14;
        font14.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font14.setPointSize(10);
        font14.setBold(true);
        font14.setWeight(75);
        label_36->setFont(font14);
        label_36->setLayoutDirection(Qt::LeftToRight);
        label_36->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border-color: #f6f6f6;\n"
""));
        label_36->setAlignment(Qt::AlignCenter);
        minuteLCD = new QLCDNumber(frame_3);
        minuteLCD->setObjectName(QString::fromUtf8("minuteLCD"));
        minuteLCD->setGeometry(QRect(160, 10, 51, 41));
        minuteLCD->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border-color: #f6f6f6;\n"
""));
        minuteLCD->setDigitCount(2);
        minuteLCD->setMode(QLCDNumber::Dec);
        minuteLCD->setSegmentStyle(QLCDNumber::Flat);
        minuteLCD->setProperty("value", QVariant(22.000000000000000));
        label_32 = new QLabel(frame_3);
        label_32->setObjectName(QString::fromUtf8("label_32"));
        label_32->setGeometry(QRect(220, 10, 20, 41));
        label_32->setFont(font14);
        label_32->setLayoutDirection(Qt::LeftToRight);
        label_32->setStyleSheet(QString::fromUtf8("color: #ffffff;\n"
"border-color: #f6f6f6;\n"
""));
        label_32->setAlignment(Qt::AlignCenter);
        clockIMG_LBL = new QLabel(frame_3);
        clockIMG_LBL->setObjectName(QString::fromUtf8("clockIMG_LBL"));
        clockIMG_LBL->setGeometry(QRect(10, 10, 41, 41));
        QFont font15;
        font15.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font15.setPointSize(22);
        clockIMG_LBL->setFont(font15);
        clockIMG_LBL->setLayoutDirection(Qt::LeftToRight);
        clockIMG_LBL->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgba(0,0,0,0%)"));
        clockIMG_LBL->setAlignment(Qt::AlignCenter);
        imgLBL->raise();
        staticIMG_2->raise();
        addIMG->raise();
        cityLBL_2->raise();
        staticIMG_0->raise();
        staticIMG_1->raise();
        cityLBL_7->raise();
        cityLBL_8->raise();
        cityLBL_22->raise();
        frame_3->raise();
        teleportBttn = new QPushButton(centralwidget);
        teleportBttn->setObjectName(QString::fromUtf8("teleportBttn"));
        teleportBttn->setGeometry(QRect(1160, 360, 101, 51));
        sizePolicy.setHeightForWidth(teleportBttn->sizePolicy().hasHeightForWidth());
        teleportBttn->setSizePolicy(sizePolicy);
        QFont font16;
        font16.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font16.setPointSize(14);
        font16.setBold(true);
        font16.setWeight(75);
        teleportBttn->setFont(font16);
        teleportBttn->setStyleSheet(QString::fromUtf8("color: #111;\n"
"background-color: rgb(0, 255, 127);\n"
"border-radius:0px;\n"
""));
        teleportBttn->setText(QString::fromUtf8("Teleport"));
#if QT_CONFIG(shortcut)
        teleportBttn->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        mapLBL = new QLabel(centralwidget);
        mapLBL->setObjectName(QString::fromUtf8("mapLBL"));
        mapLBL->setGeometry(QRect(870, 390, 421, 231));
        QFont font17;
        font17.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font17.setPointSize(16);
        mapLBL->setFont(font17);
        mapLBL->setStyleSheet(QString::fromUtf8("color: #111;\n"
"border-top-left-radius: 0;"));
        mapLBL->setAlignment(Qt::AlignCenter);
        frame_6 = new QFrame(centralwidget);
        frame_6->setObjectName(QString::fromUtf8("frame_6"));
        frame_6->setGeometry(QRect(840, 670, 481, 191));
        frame_6->setStyleSheet(QString::fromUtf8("background-color: #3a3b44;\n"
"border-top-left-radius: 0;\n"
"border-top-right-radius: 0;\n"
"border-bottom-right-radius: 25;\n"
"border-bottom-left-radius: 0;"));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        chinaFlag_LBL = new QLabel(frame_6);
        chinaFlag_LBL->setObjectName(QString::fromUtf8("chinaFlag_LBL"));
        chinaFlag_LBL->setGeometry(QRect(30, 60, 121, 81));
        chinaFlag_LBL->setFont(font2);
        chinaFlag_LBL->setLayoutDirection(Qt::LeftToRight);
        chinaFlag_LBL->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius: 0;"));
        chinaFlag_LBL->setAlignment(Qt::AlignCenter);
        franceFlag_LBL = new QLabel(frame_6);
        franceFlag_LBL->setObjectName(QString::fromUtf8("franceFlag_LBL"));
        franceFlag_LBL->setGeometry(QRect(330, 60, 121, 81));
        franceFlag_LBL->setFont(font2);
        franceFlag_LBL->setLayoutDirection(Qt::LeftToRight);
        franceFlag_LBL->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius: 0;"));
        franceFlag_LBL->setAlignment(Qt::AlignCenter);
        widget_6 = new QWidget(frame_6);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        widget_6->setGeometry(QRect(330, 150, 120, 21));
        secondLCD_Paris = new QLCDNumber(widget_6);
        secondLCD_Paris->setObjectName(QString::fromUtf8("secondLCD_Paris"));
        secondLCD_Paris->setGeometry(QRect(90, 0, 21, 21));
        secondLCD_Paris->setStyleSheet(QString::fromUtf8("color: #fff;"));
        secondLCD_Paris->setDigitCount(2);
        secondLCD_Paris->setMode(QLCDNumber::Dec);
        secondLCD_Paris->setSegmentStyle(QLCDNumber::Flat);
        secondLCD_Paris->setProperty("value", QVariant(22.000000000000000));
        hourLCD_Paris = new QLCDNumber(widget_6);
        hourLCD_Paris->setObjectName(QString::fromUtf8("hourLCD_Paris"));
        hourLCD_Paris->setGeometry(QRect(10, 0, 21, 21));
        hourLCD_Paris->setStyleSheet(QString::fromUtf8("color: #fff;"));
        hourLCD_Paris->setDigitCount(2);
        hourLCD_Paris->setMode(QLCDNumber::Dec);
        hourLCD_Paris->setSegmentStyle(QLCDNumber::Flat);
        hourLCD_Paris->setProperty("value", QVariant(22.000000000000000));
        minuteLCD_Paris = new QLCDNumber(widget_6);
        minuteLCD_Paris->setObjectName(QString::fromUtf8("minuteLCD_Paris"));
        minuteLCD_Paris->setGeometry(QRect(50, 0, 21, 21));
        minuteLCD_Paris->setStyleSheet(QString::fromUtf8("color: #fff;"));
        minuteLCD_Paris->setDigitCount(2);
        minuteLCD_Paris->setMode(QLCDNumber::Dec);
        minuteLCD_Paris->setSegmentStyle(QLCDNumber::Flat);
        minuteLCD_Paris->setProperty("value", QVariant(22.000000000000000));
        label_68 = new QLabel(widget_6);
        label_68->setObjectName(QString::fromUtf8("label_68"));
        label_68->setGeometry(QRect(70, 0, 16, 21));
        QFont font18;
        font18.setFamily(QString::fromUtf8("Microsoft JhengHei"));
        font18.setPointSize(8);
        font18.setBold(true);
        font18.setWeight(75);
        label_68->setFont(font18);
        label_68->setLayoutDirection(Qt::LeftToRight);
        label_68->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_68->setAlignment(Qt::AlignCenter);
        label_67 = new QLabel(widget_6);
        label_67->setObjectName(QString::fromUtf8("label_67"));
        label_67->setGeometry(QRect(30, 1, 16, 20));
        label_67->setFont(font18);
        label_67->setLayoutDirection(Qt::LeftToRight);
        label_67->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_67->setAlignment(Qt::AlignCenter);
        widget_7 = new QWidget(frame_6);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        widget_7->setGeometry(QRect(180, 150, 120, 21));
        secondLCD_Lima = new QLCDNumber(widget_7);
        secondLCD_Lima->setObjectName(QString::fromUtf8("secondLCD_Lima"));
        secondLCD_Lima->setGeometry(QRect(90, 0, 21, 21));
        secondLCD_Lima->setStyleSheet(QString::fromUtf8("color: #fff;"));
        secondLCD_Lima->setDigitCount(2);
        secondLCD_Lima->setMode(QLCDNumber::Dec);
        secondLCD_Lima->setSegmentStyle(QLCDNumber::Flat);
        secondLCD_Lima->setProperty("value", QVariant(22.000000000000000));
        hourLCD_Lima = new QLCDNumber(widget_7);
        hourLCD_Lima->setObjectName(QString::fromUtf8("hourLCD_Lima"));
        hourLCD_Lima->setGeometry(QRect(10, 0, 21, 21));
        hourLCD_Lima->setStyleSheet(QString::fromUtf8("color: #fff;"));
        hourLCD_Lima->setDigitCount(2);
        hourLCD_Lima->setMode(QLCDNumber::Dec);
        hourLCD_Lima->setSegmentStyle(QLCDNumber::Flat);
        hourLCD_Lima->setProperty("value", QVariant(22.000000000000000));
        minuteLCD_Lima = new QLCDNumber(widget_7);
        minuteLCD_Lima->setObjectName(QString::fromUtf8("minuteLCD_Lima"));
        minuteLCD_Lima->setGeometry(QRect(50, 0, 21, 21));
        minuteLCD_Lima->setStyleSheet(QString::fromUtf8("color: #fff;"));
        minuteLCD_Lima->setDigitCount(2);
        minuteLCD_Lima->setMode(QLCDNumber::Dec);
        minuteLCD_Lima->setSegmentStyle(QLCDNumber::Flat);
        minuteLCD_Lima->setProperty("value", QVariant(22.000000000000000));
        label_73 = new QLabel(widget_7);
        label_73->setObjectName(QString::fromUtf8("label_73"));
        label_73->setGeometry(QRect(70, 0, 16, 21));
        label_73->setFont(font18);
        label_73->setLayoutDirection(Qt::LeftToRight);
        label_73->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_73->setAlignment(Qt::AlignCenter);
        label_74 = new QLabel(widget_7);
        label_74->setObjectName(QString::fromUtf8("label_74"));
        label_74->setGeometry(QRect(30, 1, 16, 20));
        label_74->setFont(font18);
        label_74->setLayoutDirection(Qt::LeftToRight);
        label_74->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_74->setAlignment(Qt::AlignCenter);
        widget_10 = new QWidget(frame_6);
        widget_10->setObjectName(QString::fromUtf8("widget_10"));
        widget_10->setGeometry(QRect(30, 150, 120, 21));
        secondLCD_Bejing = new QLCDNumber(widget_10);
        secondLCD_Bejing->setObjectName(QString::fromUtf8("secondLCD_Bejing"));
        secondLCD_Bejing->setGeometry(QRect(90, 0, 21, 21));
        secondLCD_Bejing->setStyleSheet(QString::fromUtf8("color: #fff;"));
        secondLCD_Bejing->setDigitCount(2);
        secondLCD_Bejing->setMode(QLCDNumber::Dec);
        secondLCD_Bejing->setSegmentStyle(QLCDNumber::Flat);
        secondLCD_Bejing->setProperty("value", QVariant(22.000000000000000));
        hourLCD_Bejing = new QLCDNumber(widget_10);
        hourLCD_Bejing->setObjectName(QString::fromUtf8("hourLCD_Bejing"));
        hourLCD_Bejing->setGeometry(QRect(10, 0, 21, 21));
        hourLCD_Bejing->setStyleSheet(QString::fromUtf8("color: #fff;"));
        hourLCD_Bejing->setDigitCount(2);
        hourLCD_Bejing->setMode(QLCDNumber::Dec);
        hourLCD_Bejing->setSegmentStyle(QLCDNumber::Flat);
        hourLCD_Bejing->setProperty("value", QVariant(22.000000000000000));
        minuteLCD_Bejing = new QLCDNumber(widget_10);
        minuteLCD_Bejing->setObjectName(QString::fromUtf8("minuteLCD_Bejing"));
        minuteLCD_Bejing->setGeometry(QRect(50, 0, 21, 21));
        minuteLCD_Bejing->setStyleSheet(QString::fromUtf8("color: #fff;"));
        minuteLCD_Bejing->setDigitCount(2);
        minuteLCD_Bejing->setMode(QLCDNumber::Dec);
        minuteLCD_Bejing->setSegmentStyle(QLCDNumber::Flat);
        minuteLCD_Bejing->setProperty("value", QVariant(22.000000000000000));
        label_75 = new QLabel(widget_10);
        label_75->setObjectName(QString::fromUtf8("label_75"));
        label_75->setGeometry(QRect(70, 0, 16, 21));
        label_75->setFont(font18);
        label_75->setLayoutDirection(Qt::LeftToRight);
        label_75->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_75->setAlignment(Qt::AlignCenter);
        label_76 = new QLabel(widget_10);
        label_76->setObjectName(QString::fromUtf8("label_76"));
        label_76->setGeometry(QRect(30, 1, 16, 20));
        label_76->setFont(font18);
        label_76->setLayoutDirection(Qt::LeftToRight);
        label_76->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_76->setAlignment(Qt::AlignCenter);
        peruFlag_LBL = new QLabel(frame_6);
        peruFlag_LBL->setObjectName(QString::fromUtf8("peruFlag_LBL"));
        peruFlag_LBL->setGeometry(QRect(180, 60, 121, 81));
        peruFlag_LBL->setFont(font2);
        peruFlag_LBL->setLayoutDirection(Qt::LeftToRight);
        peruFlag_LBL->setStyleSheet(QString::fromUtf8("background-color: #f6f6f6;\n"
"border-radius: 0;"));
        peruFlag_LBL->setAlignment(Qt::AlignCenter);
        label_71 = new QLabel(frame_6);
        label_71->setObjectName(QString::fromUtf8("label_71"));
        label_71->setGeometry(QRect(30, 20, 121, 31));
        label_71->setFont(font5);
        label_71->setLayoutDirection(Qt::LeftToRight);
        label_71->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_71->setAlignment(Qt::AlignCenter);
        label_72 = new QLabel(frame_6);
        label_72->setObjectName(QString::fromUtf8("label_72"));
        label_72->setGeometry(QRect(180, 20, 121, 31));
        label_72->setFont(font5);
        label_72->setLayoutDirection(Qt::LeftToRight);
        label_72->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_72->setAlignment(Qt::AlignCenter);
        label_77 = new QLabel(frame_6);
        label_77->setObjectName(QString::fromUtf8("label_77"));
        label_77->setGeometry(QRect(330, 20, 121, 31));
        label_77->setFont(font5);
        label_77->setLayoutDirection(Qt::LeftToRight);
        label_77->setStyleSheet(QString::fromUtf8("color: #fff;"));
        label_77->setAlignment(Qt::AlignCenter);
        welcomeLBL = new QLabel(centralwidget);
        welcomeLBL->setObjectName(QString::fromUtf8("welcomeLBL"));
        welcomeLBL->setGeometry(QRect(330, 140, 641, 81));
        QFont font19;
        font19.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font19.setPointSize(65);
        font19.setBold(true);
        font19.setWeight(75);
        welcomeLBL->setFont(font19);
        welcomeLBL->setLayoutDirection(Qt::LeftToRight);
        welcomeLBL->setStyleSheet(QString::fromUtf8("color: #FBBD23;\n"
"background-color: rgba(0,0,0,0%)"));
        welcomeLBL->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        frame_8 = new QFrame(centralwidget);
        frame_8->setObjectName(QString::fromUtf8("frame_8"));
        frame_8->setGeometry(QRect(10, 670, 831, 191));
        frame_8->setStyleSheet(QString::fromUtf8("background-color: #505159;\n"
"border-top-left-radius: 0;\n"
"border-top-right-radius: 0;\n"
"border-bottom-right-radius: 0;\n"
"border-bottom-left-radius: 25;"));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        label_20 = new QLabel(frame_8);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(20, 30, 261, 51));
        QFont font20;
        font20.setFamily(QString::fromUtf8("Microsoft JhengHei Light"));
        font20.setPointSize(30);
        font20.setBold(true);
        font20.setItalic(false);
        font20.setUnderline(false);
        font20.setWeight(75);
        label_20->setFont(font20);
        label_20->setLayoutDirection(Qt::LeftToRight);
        label_20->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        label_20->setAlignment(Qt::AlignCenter);
        addTasks = new QPushButton(frame_8);
        addTasks->setObjectName(QString::fromUtf8("addTasks"));
        addTasks->setGeometry(QRect(250, 90, 30, 30));
        sizePolicy.setHeightForWidth(addTasks->sizePolicy().hasHeightForWidth());
        addTasks->setSizePolicy(sizePolicy);
        QFont font21;
        font21.setPointSize(12);
        font21.setBold(true);
        font21.setWeight(75);
        addTasks->setFont(font21);
        addTasks->setStyleSheet(QString::fromUtf8("color: #111;\n"
"background-color: rgb(0, 255, 127);\n"
"border-radius:0px;\n"
""));
        addTasks->setText(QString::fromUtf8("+"));
#if QT_CONFIG(shortcut)
        addTasks->setShortcut(QString::fromUtf8(""));
#endif // QT_CONFIG(shortcut)
        cityLBL_9 = new QLabel(frame_8);
        cityLBL_9->setObjectName(QString::fromUtf8("cityLBL_9"));
        cityLBL_9->setGeometry(QRect(30, 90, 201, 30));
        cityLBL_9->setFont(font9);
        cityLBL_9->setLayoutDirection(Qt::LeftToRight);
        cityLBL_9->setStyleSheet(QString::fromUtf8("color: #ffffff;"));
        cityLBL_9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        tasksTable = new QTableView(frame_8);
        tasksTable->setObjectName(QString::fromUtf8("tasksTable"));
        tasksTable->setEnabled(true);
        tasksTable->setGeometry(QRect(310, 30, 491, 141));
        sizePolicy.setHeightForWidth(tasksTable->sizePolicy().hasHeightForWidth());
        tasksTable->setSizePolicy(sizePolicy);
        QFont font22;
        font22.setFamily(QString::fromUtf8("Microsoft JhengHei UI"));
        font22.setPointSize(14);
        font22.setKerning(false);
        tasksTable->setFont(font22);
        tasksTable->setStyleSheet(QString::fromUtf8("color: #fff;"));
        tasksTable->setFrameShape(QFrame::NoFrame);
        tasksTable->setFrameShadow(QFrame::Plain);
        tasksTable->setShowGrid(false);
        tasksTable->horizontalHeader()->setVisible(false);
        tasksTable->horizontalHeader()->setHighlightSections(false);
        tasksTable->verticalHeader()->setVisible(false);
        tasksTable->verticalHeader()->setHighlightSections(false);
        globeIcon = new QLabel(centralwidget);
        globeIcon->setObjectName(QString::fromUtf8("globeIcon"));
        globeIcon->setGeometry(QRect(810, 640, 61, 61));
        globeIcon->setFont(font15);
        globeIcon->setLayoutDirection(Qt::LeftToRight);
        globeIcon->setStyleSheet(QString::fromUtf8("color: #fff;\n"
"background-color: rgba(0,0,0,0%)"));
        globeIcon->setAlignment(Qt::AlignCenter);
        Dashboard->setCentralWidget(centralwidget);
        frame_2->raise();
        currentFrame->raise();
        frame_8->raise();
        mapLBL->raise();
        teleportBttn->raise();
        frame_6->raise();
        welcomeLBL->raise();
        globeIcon->raise();
        menubar = new QMenuBar(Dashboard);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1329, 21));
        Dashboard->setMenuBar(menubar);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QMainWindow *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        cityLBL_3->setText(QCoreApplication::translate("Dashboard", "Notifications", nullptr));
        cityLBL_4->setText(QCoreApplication::translate("Dashboard", "Calender", nullptr));
        cityLBL_5->setText(QCoreApplication::translate("Dashboard", "Roadtrip", nullptr));
        F1_2->setText(QCoreApplication::translate("Dashboard", "\302\260 F", nullptr));
        tempLBL->setText(QCoreApplication::translate("Dashboard", "89", nullptr));
        Low_2->setText(QCoreApplication::translate("Dashboard", "Low:", nullptr));
        lowLBL->setText(QCoreApplication::translate("Dashboard", "76\302\260 F", nullptr));
        High_10->setText(QCoreApplication::translate("Dashboard", "High:", nullptr));
        highLBL->setText(QCoreApplication::translate("Dashboard", "93\302\260 F", nullptr));
        humidityLBL_2->setText(QCoreApplication::translate("Dashboard", "Humidity:", nullptr));
        humidityLBL->setText(QCoreApplication::translate("Dashboard", "93%", nullptr));
        cityLBL->setText(QCoreApplication::translate("Dashboard", "Edmonds, 98026", nullptr));
        weatherIcon->setText(QCoreApplication::translate("Dashboard", "X", nullptr));
        descLBL->setText(QCoreApplication::translate("Dashboard", "cloudy", nullptr));
        imgLBL->setText(QCoreApplication::translate("Dashboard", "Hit '+' to Add Your First Image!", nullptr));
        cityLBL_2->setText(QCoreApplication::translate("Dashboard", "Take a trip down memory lane...", nullptr));
        staticIMG_0->setText(QCoreApplication::translate("Dashboard", "Static Image", nullptr));
        staticIMG_1->setText(QCoreApplication::translate("Dashboard", "Static Image", nullptr));
        staticIMG_2->setText(QCoreApplication::translate("Dashboard", "Static Image", nullptr));
        cityLBL_7->setText(QCoreApplication::translate("Dashboard", "Your Dashboard", nullptr));
        cityLBL_8->setText(QCoreApplication::translate("Dashboard", "Search", nullptr));
        cityLBL_22->setText(QCoreApplication::translate("Dashboard", "Profile", nullptr));
        label_36->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        label_32->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        clockIMG_LBL->setText(QCoreApplication::translate("Dashboard", "X", nullptr));
        mapLBL->setText(QCoreApplication::translate("Dashboard", "Map Placeholder", nullptr));
        chinaFlag_LBL->setText(QCoreApplication::translate("Dashboard", "Flag", nullptr));
        franceFlag_LBL->setText(QCoreApplication::translate("Dashboard", "Flag", nullptr));
        label_68->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        label_67->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        label_73->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        label_74->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        label_75->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        label_76->setText(QCoreApplication::translate("Dashboard", ":", nullptr));
        peruFlag_LBL->setText(QCoreApplication::translate("Dashboard", "Flag", nullptr));
        label_71->setText(QCoreApplication::translate("Dashboard", "Beijing, China", nullptr));
        label_72->setText(QCoreApplication::translate("Dashboard", "Lima, Peru", nullptr));
        label_77->setText(QCoreApplication::translate("Dashboard", "Paris, France", nullptr));
        welcomeLBL->setText(QCoreApplication::translate("Dashboard", "Good mornin'", nullptr));
        label_20->setText(QCoreApplication::translate("Dashboard", "Today's Tasks:", nullptr));
        cityLBL_9->setText(QCoreApplication::translate("Dashboard", "Upload a CSV of up to 6 Tasks", nullptr));
        globeIcon->setText(QCoreApplication::translate("Dashboard", "X", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
