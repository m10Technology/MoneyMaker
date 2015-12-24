#ifndef UPDATER_H
#define UPDATER_H
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QUrl>
#include <QDateTime>
#include <QFile>
#include <QDebug>


class Updater
{
public:
    Updater();
    void doDownload();

signals:

public slots:
        void replyFinished(QNetworkReply *reply);
private:
        QNetworkAccessManager *manager;

};

#endif // UPDATER_H
