#include <QLabel>
#include <iomanip>
#include <iostream>
#include "array.h"

Array::Array(){
    nRows=5;
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
    delete [] array;
}

float** Array::getAry(void){
    return array;
}

void Array::setAry(void){
    array=new float*[nRows];
    for(int i=0;i<nRows;i++){
        array[i]=new float[nCols];
        for (int j=0; j<nCols;j++){
            int k = rand()%9000+1000;
            std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);
            array[i][j]=static_cast<float>(k/100.0);
        }
    }
    toString();
}

void Array::toString(){
    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            label+=QString::number(array[i][j]);
            label+=" ";
        }
        label+="\n";
    }
}
