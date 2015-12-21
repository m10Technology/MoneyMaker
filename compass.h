#include <QString>


#ifndef COMPASS_H
#define COMPASS_H


class Compass
{
public:
    Compass();
    bool start();
private:
    QString pythonPath;
    int hours;
    int iterations;
    void runNaviator();
    void captureTime();
    void waitTime(int hoursToWait);
    bool tomExists();
    void checkForFile();
};

#endif // COMPASS_H
