#include <iostream>

int min_element(int array[],int n){

    if(n < 1){
        return 0;
    }
    else{
        int small = array[0]; //intialising small and assigning first element of array to it

        for(int i=0;i<n;i++){
            if(array[i] < small){
                small = array[i]; //assigning the smallest element of the array to small
            }
        }

        return small;
    }
}