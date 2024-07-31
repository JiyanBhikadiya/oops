#include <iostream>

int count_evens(int number){
    int count = 0;

    for(int i=0;i<number;i++){
        if(i%2 == 0){
            count++; //counting number of even numbers within a range
        }
    }

    return count;
}