#include <iostream>

bool is_fanarray(int array[], int n){
    int median;
    if(n%2 == 0){
        median = n/2;
    }
    else{
        median = n/2 + 1;
    }

    int firsthalf[median],secondhalf[median];
    int flag = 0;

    // firsthalf[0] = array[0];

    for(int i = 0;i<median;i++){
        firsthalf[i] = array[i];
    }
    int count = median-1;
    for(int i=0;i<median;i++){
        secondhalf[i] = array[count];
        count++;
    }

    // std::cout<<array[0]<<array[1]<<array[2]<<std::endl;
    // std::cout<<firsthalf[0]<<firsthalf[1]<<firsthalf[2]<<std::endl;

    for(int i=0;i<median;i++){            
        for(int j=i;j<median;j++){
            if(firsthalf[j] < firsthalf[i]){
                flag = 1;
            }
        }
    }

    for(int i=0;i<median;i++){
        for(int j=i;j<median;j++){
            if(secondhalf[j] > secondhalf[i]){
                flag = 1;
            }
        }
    }

    int k = median-1;
    for(int i=0;i<median;i++){
        if(firsthalf[i] != secondhalf[k]){
            flag = 1;
        }
        k--;
    } 

    if(flag == 1){
        return false;
    }
    else{
        return true;
    }
    // return 1;
}