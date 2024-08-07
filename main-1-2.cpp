#include <iostream>

extern void modifyArray(double*,int,double); //defining a function

int main(){
    double array[5] = {1.1,2.2,3.3,4.4,5.5};
    int size = 5;
    double value = 10;

    modifyArray(array,size,value); //calling modify array

    for(int i=0;i<size;i++){
        std::cout<<array[i]<<" "; //printing array after modification
    }
    std::cout<<std::endl; //printing a new line at the end

    return 0;
}