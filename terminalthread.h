#ifndef TerminalTHREAD_H
#define TerminalTHREAD_H
#include <QThread>
#include <compass.h>
class TerminalThread : public QThread
{
public:
    TerminalThread();
    bool checkComplete();
    void setParent(Compass* c,int time,int iterations);
signals:
private:
      void run();
public slots:
};

#endif // TerminalTHREAD_H
