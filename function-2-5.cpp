#include <iostream>

bool is_descending(int array[],int n){

    if(n > 0){
        int flag = 0;
        for(int i=0;i<n;i++){            
            for(int j=i;j<n;j++){
                if(array[j] > array[i]){
                    flag = 1;
                }
            }
        }

        if(flag == 1){
            return false;
        }
        else{
            return true;
        }
    }
    else{
        return false;
    }
}