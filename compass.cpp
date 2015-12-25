#include "compass.h"
#include <QDebug>
#include <QThread>
#include <QFile>
#include <unistd.h>
#include <QDir>
#include "terminalthread.h"


void Compass::setVars(int h, int i)
{
    hours = h*3600;
    iterations = i;
}


bool Compass::start()
{
        qDebug() << "Starting Compass..." << endl;
        runNaviator();
 }


void Compass::runNaviator()
{
    qDebug() << "Running Through 60 Iterations..." << endl;
    TerminalThread *mThread = new TerminalThread();
    mThread->setParent(this,hours,iterations);
    mThread->start();

}


void Compass::setIterations(int numberOfIterations)
{
    QFile mNav(".Navigate.py");
    if(!mNav.open(QIODevice::ReadWrite)){
        qDebug() << "Yo your computer is not dank" << endl;
    }
    QTextStream in(&mNav);
    while(!in.atEnd()){
        QList<QString> Navigation;
            Navigation.append(in.readLine());
            for(int i=0; i<Navigation.length();i++){
                qDebug() <<  Navigation.at(i);
            }

    }

}


void Compass::waitTime(int hoursToWait)
{
    qDebug() << "Taking a Break" << endl;
    sleep(hoursToWait);
    qDebug() << "All Finished, starting over now..." << endl;
    this->start();
}

bool Compass::checkComplete()
{

    QFile timeFile("./time.txt");
    if(timeFile.exists()){
        return true;
    }
    else{
        return false;
    }
}




