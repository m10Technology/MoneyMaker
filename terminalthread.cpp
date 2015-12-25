#include "terminalthread.h"
#include <QDebug>
#include <QFile>
#include <string>
#include <stdlib.h>
#include <sstream>

TerminalThread::TerminalThread()
{

}

Compass* mParent;
int hours;
std::string mIterations;
std::string command = "lxterminal -e ~/Desktop/MoneyMaker/startstuff.sh ";
bool TerminalThread::checkComplete()
{
    QFile timeFile("./time.txt");
    if(timeFile.exists()){
        timeFile.remove();
        return true;
    }
    else{
        return false;
    }
}

void TerminalThread::setParent(Compass *c,int time,int iterations)
{
    mParent = c;
    hours = time;


    //create an output string stream
    std::ostringstream os ;

    //throw the value into the string stream
    os << iterations ;

    //convert the string stream into a string and return
    mIterations = command + os.str();

}

void TerminalThread::run()
{
    qDebug() << "Starting in other thread..." << endl;
    qDebug() << mIterations.c_str() << endl;
    system(mIterations.c_str());
    while(!checkComplete()){
        qDebug() << "Not Complete" << endl;
        sleep(5);
    }
    qDebug() << "Finished My Iterations" << endl;
    mParent->waitTime(hours);
}

