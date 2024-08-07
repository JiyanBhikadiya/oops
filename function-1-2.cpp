#include <iostream>

void modifyArray(double* array,int size,double values){
    double *new_array = new double[size];

    for(int i=0;i<size;i++){
        new_array[i] = array[i] + values;

        std::cout<<new_array[i]<<" ";
    }

    std::cout<<std::endl;
}