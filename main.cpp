#include <iostream>
#include "workshop.h"

extern void changeValue(double*);
extern void printArray(double*,int);
extern double* dynamicArray(int);

int main(){
    double x = 30;     
    changeValue(&x);

    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    printArray(array,5);

    int size = 5;
    double* array2 = dynamicArray(size);

    for(int i=0;i<size;i++){
        std::cout<<array2[i]<<" ";
    }
    std::cout<<std::endl;
}