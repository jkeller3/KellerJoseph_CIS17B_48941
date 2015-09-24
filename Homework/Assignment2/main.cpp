/*
 * File:   main.cpp
 * Author: Joseph Keller
 *
 * Created on September 20, 2015, 5:05 PM
 */
#include <QtWidgets/QApplication>
#include <QtGui/QLabel>
#include <cstdlib> //srand
#include <time.h> //time
#include "array.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QLabel *label = new QLabel("Hello Qt!");
    label->show();
    srand(time(NULL));
    Array a(5,10);

    return app.exec();
}
