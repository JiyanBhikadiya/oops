#include <iostream>

int median_array(int array[], int n){

    if(n<1 || n%2==0){
        return 0;
    }
    else{
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

        int median = array[n/2];

        return median;
    }
}