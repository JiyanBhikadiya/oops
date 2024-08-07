#include <iostream>

void changeValue(double* x){
    *x = 42;
    std::cout<<*x<<std::endl;
}

void printArray(double* x,int y){
    for(int i=0;i<5;i++){
        std::cout<<x[i]<<" ";
    }
    std::cout<<std::endl;
}