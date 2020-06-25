#include "dashboard.h"
#include "ui_dashboard.h"

Dashboard::Dashboard(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Dashboard)
    , timer(new QTimer)
    , photoTimer(new QTimer)
    , weatherTimer(new QTimer)
    , worldTimer(new QTimer)
    , myModel(new toDo(this))
    , httpManager(new HTTPManager)
{
    ui->setupUi(this);
    ui->tasksTable->setModel(myModel);
    ui->tasksTable->horizontalHeader()->setStretchLastSection(true);

    /* Timers */
    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));
    connect(worldTimer, SIGNAL(timeout()),
            this, SLOT(worldClock()));
    connect(weatherTimer, SIGNAL(timeout()),
            this, SLOT(refreshWeather()));
    connect(photoTimer, SIGNAL(timeout()),
            this, SLOT(refreshImage()));

    setCurrentTime(); // Initialize digital clock
    timer->start(1000);         // 1 Second

    intializeImages(); // Initializes gallery with 5 images
    refreshImage();    // Updates images
    photoTimer->start(10000); // 10 Seconds

    connect(httpManager, SIGNAL(ImageReady(QPixmap*)),
            this, SLOT(loadMapImage(QPixmap*)));

    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject*)),
            this, SLOT(loadWeatherJson(QJsonObject*)));

    connect(httpManager, SIGNAL(wIconReady(QPixmap*)),
            this, SLOT(loadWeatherIcon(QPixmap*)));

    httpManager->sendWeatherRequest(zipCode); // Default weather for Edmonds
    weatherTimer->start(60000);               // 1 Minute
    httpManager->sendImageRequest(zipCode);   // Default map for Edmonds
    httpManager->sendWIconRequest(zipCode);   // Default weather icon for Edmonds

    /* World Clock */
    worldClock(); // Initialize world clock
    worldTimer->start(1000);

    /* Loads Static Images */
    loadStaticIMGS();

}

/* Destructor */
Dashboard::~Dashboard(){ delete ui; }

/* Digital Clock: Sets Current Time */
void Dashboard::setCurrentTime(){

    // Display current time
    QTime time = QTime::currentTime();
    // QString hour = time.toString("hh");
    ui->hourLCD->display(time.toString("hh"));
    ui->minuteLCD->display(time.toString("mm"));
    ui->secondLCD->display(time.toString("ss"));

    // Welcome message
    int thisHour = time.toString("hh").toInt();
    if (thisHour < 6)
        ui->welcomeLBL->setText("Go to sleep...");
    if (thisHour > 5 && thisHour < 12)
        ui->welcomeLBL->setText("Goood Mornin'");
    else if (thisHour > 11 && thisHour < 18)
        ui->welcomeLBL->setText("Afternoon' Sir");
    else if (thisHour > 17)
        ui->welcomeLBL->setText("Goood evenin'");
}

/* Weather / Map: Main Driver */
void Dashboard::loadWeatherJson(QJsonObject *json){

    qDebug() << "Json ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString description = json->value("weather").toArray()[0].toObject()["description"].toString();
    // QString icon = json->value("weather").toArray()[0].toObject()["icon"].toString();
    QString city = json->value("name").toString();

    int temp = json->value("main").toObject()["temp"].toDouble();
    int temp_min = json->value("main").toObject()["temp_min"].toDouble();
    int temp_max = json->value("main").toObject()["temp_max"].toDouble();
    double humidity = json->value("main").toObject()["humidity"].toDouble();

    qDebug() << weather;
    qDebug() << description;
    qDebug() << temp;
    qDebug() << temp_min;
    qDebug() << temp_max;

    ui->tempLBL->setText(QString::number(temp));
    ui->highLBL->setText(QString::number(temp_max) + "° F");
    ui->lowLBL->setText(QString::number(temp_min) + "° F");
    ui->cityLBL->setText(city + ", " + zipCode);
    ui->descLBL->setText(description);
    ui->humidityLBL->setText(QString::number(humidity) + "%");

    QString icon = json->value("weather").toArray()[0].toObject()["icon"].toString();
    QString iconLink= "http://openweathermap.org/img/wn/" + icon + ".png";
    qDebug() << "Json finished, sent Image Request.";
    httpManager->sendWIconRequest(iconLink);

}

/* Weather: Icon Load */
void Dashboard::loadWeatherIcon(QPixmap *image){ ui->weatherIcon->setPixmap(*image); }

/* Map: IMG Load */
void Dashboard::loadMapImage(QPixmap *image){ ui->mapLBL->setPixmap(*image); }

/* Weather: Refresh */
void Dashboard::refreshWeather(){ httpManager->sendWeatherRequest(zipCode); }

/* Teleport: Change Zipcode Displayed */
void Dashboard::on_teleportBttn_clicked(){
    zipCode = QInputDialog::getText(this, tr("Teleport"),
        tr("Zip: "), QLineEdit::Normal, zipCode);
    httpManager->sendImageRequest(zipCode);
    httpManager->sendWeatherRequest(zipCode);
    httpManager->sendWIconRequest(zipCode);
}

/* Gallery: Initialize Images */
void Dashboard::intializeImages(){
    QPixmap* person0 = new QPixmap(":/Images/person0.jpg");
    QPixmap* person1 = new QPixmap(":/Images/person1.jpg");
    QPixmap* person2 = new QPixmap(":/Images/person2.jpg");
    QPixmap* person3 = new QPixmap(":/Images/person3.jpg");
    QPixmap* person4 = new QPixmap(":/Images/person4.jpg");

    galleryImages.push(person0);
    galleryImages.push(person1);
    galleryImages.push(person2);
    galleryImages.push(person3);
    galleryImages.push(person4);
}

/* Gallery: Add Image */
void Dashboard::on_addIMG_clicked(){
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Add Image to Gallery"), "",
        tr("Image (*png, *jpg);;All Files (*)"));

    QPixmap* image = new QPixmap(fileName);
    if(image) // Checks if an image was uploaded
        galleryImages.push(image);
    refreshImage(); // Refreshes the image
}

/* Gallery: Display Images */
void Dashboard::refreshImage(){
    if (galleryImages.size() == 0){
        ui->imgLBL->setText("Hit '+' to Add Your First Image");
    } else {
        imgPos++;
        if (imgPos >= galleryImages.size()){
            imgPos = 0;
        }
        QPixmap photo = *galleryImages.at(imgPos);
        ui->imgLBL->setPixmap(photo.scaled(ui->imgLBL->size(),Qt::KeepAspectRatioByExpanding));
    }
}

/* World Clock */
void Dashboard::worldClock(){

    QDateTime time = QDateTime::currentDateTime();

    QTimeZone beijing("Asia/Shanghai");
    QDateTime currentTime_Beijing = time.toTimeZone(beijing);
    ui->hourLCD_Bejing->display(currentTime_Beijing.toString("hh"));
    ui->minuteLCD_Bejing->display(currentTime_Beijing.toString("mm"));
    ui->secondLCD_Bejing->display(currentTime_Beijing.toString("ss"));

    QTimeZone lima("America/Lima");
    QDateTime currentTime_Lima = time.toTimeZone(lima);
    ui->hourLCD_Lima->display(currentTime_Lima.toString("hh"));
    ui->minuteLCD_Lima->display(currentTime_Lima.toString("mm"));
    ui->secondLCD_Lima->display(currentTime_Lima.toString("ss"));

    QTimeZone paris("Europe/Paris");
    QDateTime currentTime_Paris = time.toTimeZone(paris);
    ui->hourLCD_Paris->display(currentTime_Paris.toString("hh"));
    ui->minuteLCD_Paris->display(currentTime_Paris.toString("mm"));
    ui->secondLCD_Paris->display(currentTime_Paris.toString("ss"));
}

/* Helper Method: Loads all Static Images */
void Dashboard::loadStaticIMGS(){

    /* Paper Plane */
    QPixmap file(":/Images/plane.png");
    QIcon globeIcon(file);
    globeIcon.addPixmap(file, QIcon::Normal, QIcon::Off);
    ui->globeIcon->setPixmap(file.scaled(64,64,Qt::KeepAspectRatio));

    /* Flags */
    QPixmap frenchFlag(":/Images/france.png");
    QIcon flagIcon_0(frenchFlag);
    flagIcon_0.addPixmap(frenchFlag, QIcon::Normal, QIcon::Off);
    ui->franceFlag_LBL->setPixmap(frenchFlag.scaled(ui->franceFlag_LBL->size(),Qt::KeepAspectRatioByExpanding));

    QPixmap chineseFlag(":/Images/china.jpg");
    QIcon flagIcon_1(chineseFlag);
    flagIcon_1.addPixmap(chineseFlag, QIcon::Normal, QIcon::Off);
    ui->chinaFlag_LBL->setPixmap(chineseFlag.scaled(ui->chinaFlag_LBL->size(),Qt::KeepAspectRatioByExpanding));

    QPixmap peruFlag(":/Images/peru.png");
    QIcon flagIcon_2(peruFlag);
    flagIcon_2.addPixmap(peruFlag, QIcon::Normal, QIcon::Off);
    ui->peruFlag_LBL->setPixmap(peruFlag.scaled(ui->peruFlag_LBL->size(),Qt::KeepAspectRatioByExpanding));

    /* Gallery Images, Static only */
    QPixmap IMG_0(":/Images/s_IMG0.jpg");
    QPixmap IMG_1(":/Images/s_IMG1.jpg");
    QPixmap IMG_2(":/Images/s_IMG2.jpg");
    QIcon sIMG_0(IMG_0);
    QIcon sIMG_1(IMG_1);
    QIcon sIMG_2(IMG_2);
    sIMG_0.addPixmap(IMG_0, QIcon::Normal, QIcon::Off);
    sIMG_1.addPixmap(IMG_1, QIcon::Normal, QIcon::Off);
    sIMG_2.addPixmap(IMG_2, QIcon::Normal, QIcon::Off);
    ui->staticIMG_0->setPixmap(IMG_0.scaled(ui->staticIMG_0->size(),Qt::KeepAspectRatioByExpanding));
    ui->staticIMG_1->setPixmap(IMG_1.scaled(ui->staticIMG_1->size(),Qt::KeepAspectRatioByExpanding));
    ui->staticIMG_2->setPixmap(IMG_2.scaled(ui->staticIMG_2->size(),Qt::KeepAspectRatioByExpanding));

    /* Clock Img */
    QPixmap clockIMG(":/Images/clock.png");
    QIcon cIMG(clockIMG);
    cIMG.addPixmap(clockIMG, QIcon::Normal, QIcon::Off);
    ui->clockIMG_LBL->setPixmap(clockIMG.scaled(ui->clockIMG_LBL->size(),Qt::KeepAspectRatioByExpanding));
}

/* ToDo list */
void Dashboard::on_addTasks_clicked(){
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Upload ToDo List"), "",
        tr("ToDo (*.csv);;All Files (*)"));
    myModel->openFile(fileName);
}

/* Quit Application Button */
void Dashboard::on_quit_BTN_clicked(){ QApplication::quit(); }
