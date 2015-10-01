/*
 * File:   Array.h
 * Author: Joseph Keller
 *
 * Created on September 20, 2015, 5:06 PM
 */

#ifndef ARRAY_H
#define	ARRAY_H

class Array : virtual fillarray{
    private:
        int nRows;
        int nCols;
        int **array;

    public:
        Array();
        Array(int,int);
        ~Array();
        int** getAry();
        void setAry();
        void aToStr();
        QString output();
};

class ToPrint:public Array;

#endif	/* ARRAY_H */

