#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "compass.h"
#include <updater.h>
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
    int iterations = ui->spinBox->value();
    int hoursBetweenCycle = ui->spinBox_2->value();

    Compass mComp;
    mComp.setVars(hoursBetweenCycle,iterations);
    mComp.start();


}

void MainWindow::on_pushButton_2_clicked()
{
    //Check for Updates
    Updater mUpdate;
    mUpdate.doDownload();

}
