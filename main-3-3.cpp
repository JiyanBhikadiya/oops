#include <iostream>

extern double weighted_average(int[] , int);

int main(){
    int array[6] = {1,2,1,4,1,3}; //initialising variable

    std::cout<<weighted_average(array,6)<<std::endl; // printing returned value
    return 0;
}