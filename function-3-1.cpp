#include <iostream>

bool is_fanarray(int array[], int n){
    int median;
    if(n%2 == 0){
        median = n/2; //calculating median
    }
    else{
        median = n/2 + 1; //increasing median by 1 if there are odd number of elements
    }

    int firsthalf[median],secondhalf[median];
    int flag = 0;

    //placing starting elements in a new array
    for(int i = 0;i<median;i++){
        firsthalf[i] = array[i];
    }

    //placing ending elements in a new array
    for(int i=0;i<median;i++){
        secondhalf[i] = array[count];
        count++;
    }

    int count;
    if(n%2 == 0){
        count = median;
    }
    else{
        count = median-1;
    }

    for(int i=0;i<median;i++){ //placing the first elements in ascending order
        for(int j=i;j<median;j++){
            if(firsthalf[j] < firsthalf[i]){
                flag = 1;
            }
        }
    }

    for(int i=0;i<median;i++){ //placing the first elements in descending order
        for(int j=i;j<median;j++){
            if(secondhalf[j] > secondhalf[i]){
                flag = 1;
            }
        }
    }

    int k = median-1;
    for(int i=0;i<median;i++){
        if(firsthalf[i] != secondhalf[k]){ //checking whether the elements are same for palindrome or not
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
}