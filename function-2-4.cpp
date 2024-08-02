#include <iostream>

using namespace std;

extern int array_min(int integers[],int length);
extern int array_max(int integers[],int length);

int sum_min_max(int integers[],int length){
    if(length <= 0){
        return -1; //returning -1
    }
    else{
        int min = array_min(integers,length); //calling array_min function and passing integers and length as parameters.
        int max = array_max(integers,length);

        int sum = min + max; //calculating sum

        return sum;
    }
}

int array_min(int integers[],int length){
    int min = integers[0]; //assigning first element to min

    for(int i=0;i<length;i++){ 
        if(integers[i] < min){ //condition to find minimum
            min = integers[i];
        }
    }
    
    return min;
}

int array_max(int integers[],int length){
    int max = integers[0];

    for(int i=0;i<length;i++){
        if(integers[i] > max){
            max = integers[i]; //finding and assigning largest number to max
        }
    }

    return max; //returning max
}