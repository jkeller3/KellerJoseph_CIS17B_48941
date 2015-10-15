#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //w.setStyleSheet("QWidget{background-image: url(:/images/title.png");
    w.show();

    return a.exec();
}
