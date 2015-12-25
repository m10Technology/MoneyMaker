#-------------------------------------------------
#
# Project created by QtCreator 2015-11-16T23:07:16
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MoneyMaker
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    compass.cpp \
    updater.cpp \
    terminalthread.cpp

HEADERS  += mainwindow.h \
    compass.h \
    updater.h \
    terminalthread.h

FORMS    += mainwindow.ui
