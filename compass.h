#include <QString>


#ifndef COMPASS_H
#define COMPASS_H


class Compass
{
public:
    void setVars(int h,int i);
    bool start();
    void waitTime(int hoursToWait);
private:
    QString pythonPath;
    int hours;
    int iterations;
    void runNaviator();
    void setIterations(int numberOfIterations);
    bool checkComplete();

};

#endif // COMPASS_H
