#include <iostream>
#include "workshop.h"

extern void changeValue(double*);
extern void printArray(double*,int);
extern double arrayMax(double*,int);
double* dynamicArray(int, double);

int main(){
    double x = 30;     
    changeValue(&x);

    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    printArray(array,5);

    double maximum_element_array[5] = {23.6,131.3,95.9,-200.0,0.0};    
    std::cout<<arrayMax(maximum_element_array,5)<<std::endl;

    double array2[5] = {1.1,2.2,3.3,4.4,5.5};
    int size = 5;
    double* new_array = dynamicArray(size,array2);

    for(int i=0;i<size;i++){
        std::cout<<new_array[i]<<" ";
    }
    std::cout<<std::endl;
}