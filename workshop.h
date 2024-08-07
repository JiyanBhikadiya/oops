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

double* dynamicArray(int x, double* array2){
    // double* new_array = new(std::nothrow) double[x];
    double* new_array = new double[x];

    if(new_array == nullptr){
        std::cerr<<"Memory allocation failed"<<std::endl;
        return nullptr;
    }

    for(int i=0;i<x;i++){
        new_array[i] = array2[i];
    }

    return new_array;
    delete[] new_array;
}