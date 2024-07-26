#include <iostream>

int max_element(int array[],int n){

    if(n < 1){
        return 0;
    }
    else{
        int big = array[1]; //intialising big and assigning first element of array to it

        for(int i=0;i<n;i++){
            if(array[i] > big){
                big = array[i]; //assigning the smallest element of the array to small
            }
        }

        return big;
    }
}