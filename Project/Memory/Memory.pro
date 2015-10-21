#-------------------------------------------------
#
# Project created by QtCreator 2015-10-13T12:45:27
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Memory
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    gamewindow.cpp

HEADERS  += mainwindow.h \
    gamewindow.h

FORMS    += mainwindow.ui \
    gamewindow.ui

RESOURCES += \
    images.qrc
