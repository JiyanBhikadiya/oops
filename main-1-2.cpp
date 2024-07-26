#include <iostream>

extern double array_mean(int[],int); //defining the function

int main(){
    int array[0] = {}; // initialising variable

    std::cout<<array_mean(array,0)<<std::endl; // printing returned value
    return 0;
}