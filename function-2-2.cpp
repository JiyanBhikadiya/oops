#include <iostream>

int max_element(int array[],int n){

    if(n < 1){
        return 0;
    }
    else{
        int big = array[1];

        for(int i=0;i<n;i++){
            if(array[i] > big){
                big = array[i];
            }
        }

        return big;
    }
}