#include <iostream>
#include <cstdlib>
#include <stdlib.h>
#include "array.h"

Array::Array(){
    nRows=10;
    nCols=5;
    this->setAry();
}

Array::Array(int row, int col){
    nRows=row;
    nCols=col;
    this->setAry();
}

Array::~Array(void){
    for(int i=0;i<nRows;i++){
        delete [] array[i];
    }
    delete [] cAry;
    delete [] array;
}

int** Array::getAry(void){
    return array;
}

void Array::setAry(void){
    array=new int*[nRows];
    for(int i=0;i<nRows;i++){
        array[i]=new int[nCols];
        for (int j=0; j<nCols;j++){
            array[i][j]=rand()%90+10;
        }
    }
    toString();
}

void Array::toString(){
    cAry = new char[nRows*nCols];
    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            cAry[i*nCols+j] = array[i][j];
        }
    }
    toPrint();
}
