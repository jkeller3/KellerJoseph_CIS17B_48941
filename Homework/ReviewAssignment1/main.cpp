/*
 * File:   main.cpp
 * Author: Joseph Keller
 *
 * Created on September 9, 2015, 3:12 PM
 */
#include <QApplication>
#include <QLabel>
#include <cstdlib> //srand
#include <time.h> //time
#include "array.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    srand(time(NULL));
    Array a(5,5);
    QLabel *label = new QLabel(a.output());
    label->show();


    return app.exec();
}
