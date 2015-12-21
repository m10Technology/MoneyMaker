#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "compass.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    //Start Magic
    QString path = "/home/garrett/Desktop/python.py";
    int iterations = 5;
    int hoursBetweenCycle = 2;

    Compass mComp;
    mComp.start();


}
