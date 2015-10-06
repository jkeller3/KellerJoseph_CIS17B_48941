#include <QString>
#include "fillarray.h"
#ifndef ARRAY_H
#define	ARRAY_H


//Base Class
class Array: public fillArray{
    private:
        int nRows;
        int nCols;
        float **array;
    protected:
        QString label;
    public:
        Array();
        Array(int,int);
        ~Array();
        float** getAry();
        void setAry();
        void toString();
};


#endif	/* ARRAY_H */

