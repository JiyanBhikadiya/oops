#include <iostream>

extern double arrayMin(double*,int); //defining a function

int main(){
    double array[5] = {1.1,-2.2,3.3,-4.4,5.5}; //initialising variable
    int size = 5;
    
    std::cout<<arrayMin(array,size)<<std::endl; //calling arrayMin and passing array and size as parameter
}