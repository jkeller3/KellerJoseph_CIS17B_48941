/* 
 * File:   Array.h
 * Author: rcc
 *
 * Created on September 9, 2015, 4:10 PM
 */

#ifndef ARRAY_H
#define	ARRAY_H

class Array{
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
        void output();
};

#endif	/* ARRAY_H */

