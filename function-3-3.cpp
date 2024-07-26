#include <iostream>

double weighted_average(int array[], int n){
    int new_array[n];
    for(int i=0;i<n;i++){
        int temp;
        for(int j=i;j<n;j++){
            if(array[j] < array[i]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    float sum = 0;
    for(int i=0;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(array[j] == array[i]){
                count++;
            }
        }
        sum = sum + (array[i] * ((float)count/n));
    }    

    return sum;
}