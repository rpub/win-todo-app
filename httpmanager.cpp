#include "httpmanager.h"
#include <QJsonDocument>
#include <QJsonObject>

HTTPManager::HTTPManager(QObject *parent) :
    QObject(parent),
    wIconDownloadManager(new QNetworkAccessManager),
    imageDownloadManager(new QNetworkAccessManager),
    weatherAPIManager(new QNetworkAccessManager)
{

    connect(wIconDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(wIconDownloadedHandler(QNetworkReply*)));

    connect(imageDownloadManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(ImageDownloadedHandler(QNetworkReply*)));

    connect(weatherAPIManager, SIGNAL(finished(QNetworkReply*)),
            this, SLOT(WeatherDownloadedHandler(QNetworkReply*)));
}

HTTPManager::~HTTPManager()
{
    delete wIconDownloadManager;
    delete imageDownloadManager;
    delete weatherAPIManager;
}

void HTTPManager::sendWIconRequest(QString link){
    QNetworkRequest request;
    request.setUrl(QUrl(link));
    wIconDownloadManager->get(request);
    qDebug() << "Image request sent to address " << request.url();
}

void HTTPManager::sendImageRequest(QString zip)
{
    QNetworkRequest request;

    // use your key for bing map api!
    QString address = "https://dev.virtualearth.net/REST/V1/Imagery/Map/Road/"
            + zip
            + "/7?mapSize=451,381&mapLayer=TrafficFlow&format=png&key=Aq8nYugGoo_51TwqWsOK0kcbwVZ85ZrmyzvOa8LPWDbFRhAMzk4WLpyAi92pFwDC";
    request.setUrl(QUrl(address));
    imageDownloadManager->get(request);
    qDebug() << "Image Request Sent to Address " << request.url();
}

void HTTPManager::sendWeatherRequest(QString zip)
{
    QNetworkRequest request;

    // use your own key for weather api!
    QString address = "http://api.openweathermap.org/data/2.5/weather?zip="
            + zip
            + ",us&units=imperial&appid=55b744fca94f45a51bb660fb706d378c";

    request.setUrl(QUrl(address));
    weatherAPIManager->get(request);
    qDebug() << "Weather Request Sent to Address " << request.url();
}

void HTTPManager::ImageDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Image Reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";
    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit ImageReady(image);
}

void HTTPManager::wIconDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Icon Reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";
    QPixmap *image = new QPixmap();
    image->loadFromData(reply->readAll());
    reply->deleteLater();

    emit wIconReady(image);
}

void HTTPManager::WeatherDownloadedHandler(QNetworkReply *reply)
{
    qDebug() << "Weather Reply has arrived";
    if (reply->error()) {
        qDebug() << reply->errorString();
        return;
    }

    qDebug() << "Download was successful";

    QString answer = reply->readAll();
    reply->deleteLater();

    QJsonDocument jsonResponse = QJsonDocument::fromJson(answer.toUtf8());
    QJsonObject *jsonObj = new QJsonObject(jsonResponse.object());

    emit WeatherJsonReady(jsonObj);
}
