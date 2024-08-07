#include <iostream>

void changeValue(double* x){
    *x = 42;
    std::cout<<*x<<std::endl;
}

void printArray(double* x,int y){
    for(int i=0;i<y;i++){
        std::cout<<x[i]<<" ";
    }
    std::cout<<std::endl;
}

double arrayMax(double* x,int y){
    double max = x[0];

    for(int i=0;i<y;i++){
        if(x[i] > max){
            max = x[i];
        }
    }

    return max;
}