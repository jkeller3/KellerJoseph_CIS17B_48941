/*
 * File:   Array.h
 * Author: Joseph Keller
 *
 * Created on September 9, 2015, 4:10 PM
 */
#include <QString>

#ifndef ARRAY_H
#define	ARRAY_H



class Array{
    private:
        int nRows;
        int nCols;
        int **array;
        QString label;
    public:
        Array();
        Array(int,int);
        ~Array();
        int** getAry();
        void setAry();
        void aToStr();
        QString output();
};

#endif	/* ARRAY_H */

