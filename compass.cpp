#include "compass.h"
#include <QDebug>
#include <QThread>
#include <QFile>
#include <unistd.h>
Compass::Compass()
{


}


bool Compass::start()
{
        qDebug() << "Starting Compass..." << endl;
     //   qDebug() << "Running Cycle " << counter ;
        captureTime();
        runNaviator();
        checkForFile();
    }


void Compass::runNaviator()
{
    system("gnome-terminal -e ~/Desktop/script.sh");
}

void Compass::captureTime()
{

}

void Compass::waitTime(int hoursToWait)
{
    qDebug() << "Starting Waiting" << endl;
    sleep(5);
    qDebug() << "End Waiting" << endl;
}

bool Compass::tomExists()
{
    QFile tomsFile("/home/garrett/Desktop/time.txt");
    if(tomsFile.exists()){
        return true;
    }
    else{
        return false;
    }
}

void Compass::checkForFile()
{
    if(!tomExists()){
        qDebug() << "Checking for Tom" << endl;
        sleep(5);
        checkForFile();
    }
    qDebug() << "Tom Achieved!" << endl;
    waitTime(2000);
    this->start();
}

