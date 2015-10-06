/*
 * File:   main.cpp
 * Author: Joseph Keller
 *
 * Created on October 6, 2015, 2:46 PM
 */
#include <QApplication>
#include <QLabel>
#include <cstdlib> //srand
#include <time.h> //time
#include "array.h"
#include "toprint.h"
#include "fillarray.h"
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    srand(time(NULL));
    Array a();
    toPrint p;
    QLabel *label = new QLabel(p.output());
    label->show();


    return app.exec();
}
