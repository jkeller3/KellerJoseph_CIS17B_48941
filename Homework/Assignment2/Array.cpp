#include <QLabel>
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
    delete [] array;
}

int** Array::getAry(void){
    return array;
}

void fillArray::aToStr(){
    for(int i=0; i<nRows; i++){
        for(int j=0; j<nCols; j++){
            label+=QString::number(array[i][j]);
            label+=" ";
        }
        label+="\n";
    }
}
