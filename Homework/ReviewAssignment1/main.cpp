/* 
 * File:   main.cpp
 * Author: Joseph Keller
 *
 * Created on September 9, 2015, 3:12 PM
 */

#include <cstdlib>
#include <iostream>
#include <stdlib.h>
#include "Array.h"
using namespace std;

int main(int argc, char** argv) {
    srand(time(NULL));
    Array a(5,10);
    a.output();
    
    return 0;
}

