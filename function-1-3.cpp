#include <iostream>

int num_count(int array[],int n,int num){
    int count = 0;

    for(int i=0;i<n;i++){
        if(array[i] == num){ //checking if condition
            count++; //counting the frequency of a number
        }
    }

    return count;
}