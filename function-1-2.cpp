#include <iostream>

double array_mean(int array[],int n){    
    if(n<1){ //checking if condition
        return 0.0;
    }
    else{
        int sum = 0;

        for(int i=0;i<n;i++){
            sum += array[i];
        }

        double avg = (double)sum / n; //calculating average   
        return avg;
    }
}