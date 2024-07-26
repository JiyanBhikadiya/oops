#include <iostream>

double sum_even(double array[], int n){
    double sum = 0.0;

    for(int i=0;i<n;i++){
        if(i%2 == 0){
            sum += array[i]; //calculating sum of the elements of the even position of the array
        }
    }

    return sum;
}