#include <iostream>

double arrayMin(double* array,int size){
    double min = array[0]; //assigning first element of array to min

    for(int i=0;i<size;i++){
        if(array[i] < min){ //checking condition to find minimum element
            min = array[i];
        }
    }

    return min; //returning the minimum element
}