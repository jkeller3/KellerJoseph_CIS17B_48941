#include "fillarray.h"
#include "array.h"
virtual void fillArray::fillArray()
{
    if(array!=)

    array=new int*[nRows];
    for(int i=0;i<nRows;i++){
        array[i]=new int[nCols];
        for (int j=0; j<nCols;j++){
            array[i][j]=rand()%90+10;
        }
    }
}
