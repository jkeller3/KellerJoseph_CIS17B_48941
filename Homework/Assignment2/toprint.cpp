#include "toprint.h"
#include "array.h"
toPrint::toPrint()
{
    std::cout<<"Int Array: \n";
    for(int i=0;i<nRows;i++){
        for(int j=0; j<nCols;j++){
            std::cout<<array[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
    std::cout<<"Char Array: \n";
    for(int i=0;i<nRows;i++){
        for (int j=0; j<nCols;j++){
            std::cout<<cAry[i*nCols+j]-0<<" ";
        }
        std::cout<<std::endl;
    }
}

