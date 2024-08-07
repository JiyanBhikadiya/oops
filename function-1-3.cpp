#include <iostream>

double* duplicateArray(double* array, int size){
    double* new_array = new double[size]; //allocating a new dynamic array

    for(int i=0;i<size;i++){
        new_array[i] = array[i]; //assingning every element of the array to the new_array
    }

    return new_array; //returning new_array
}