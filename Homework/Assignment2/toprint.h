#include <QString>
#include "array.h"
#ifndef TOPRINT_H
#define TOPRINT_H

//Derived class
class toPrint: public Array {
    public:
        QString output();
};

#endif // TOPRINT_H
