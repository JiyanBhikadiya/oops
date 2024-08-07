#include <iostream>
#include "workshop.h"

extern void changeValue(double*);
extern void printArray(double*,int);

int main(){
    double x = 30;     
    changeValue(&x);

    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    printArray(array,5);
}