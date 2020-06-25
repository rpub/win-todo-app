#ifndef DASHBOARD_H
#define DASHBOARD_H

#include <QMainWindow>
#include <QTimer>
#include <QTime>
#include <QStack>
#include <QFileDialog>
#include <iostream>
#include <QMessageBox>
#include <QInputDialog>
#include <QPixmap>
#include <QVector>
#include <string>
#include <QTimeZone>
#include <QTextStream>
#include <QJsonObject>
#include <QJsonArray>

#include "httpmanager.h"
#include "todo.h"

namespace Ui {
    class Dashboard;
}

class Dashboard : public QMainWindow
{
    Q_OBJECT

public:
    explicit Dashboard(QWidget *parent = nullptr);
    ~Dashboard();

private slots:

    /* Digital / World Clocks */
    void worldClock();
    void setCurrentTime();

    /* Weather / Map */
    void refreshWeather(); // Weather Data
    void loadWeatherJson(QJsonObject *json); // Weather Data
    void loadWeatherIcon(QPixmap *image);    // Weather Icon
    void refreshImage();               // Map Image
    void loadMapImage(QPixmap *image); // Map Image
    void on_teleportBttn_clicked();    // Change zipcode

    /* Gallery */
    void intializeImages();
    void on_addIMG_clicked();

    /* Todo list */
    void on_addTasks_clicked();

    /* Other */
    void on_quit_BTN_clicked();
    void loadStaticIMGS();

private:
    /* Global Variabes */
    int imgPos = 0;
    QStack<QPixmap*> galleryImages;
    QString zipCode = "98026";

    Ui::Dashboard *ui;
    QTimer *timer;
    QTimer *photoTimer;
    QTimer *weatherTimer;
    QTimer *worldTimer;
    toDo *myModel;
    HTTPManager *httpManager;
};

#endif // DASHBOARD_H
