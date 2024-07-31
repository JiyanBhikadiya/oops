#include <iostream>

double weighted_average(int array[], int n){
    int new_array[n];
    for(int i=0;i<n;i++){ //sorting the elements of the array in ascending order
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
                count++; // calculating the frequency of each element of array
            }
        }
        sum = sum + (array[i] * ((float)count/n)); //calculating sum as per the program requirments
    }    

    return sum;
}