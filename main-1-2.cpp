#include <iostream>

extern double array_mean(int[],int);
int main(){
    int array[0] = {};

    std::cout<<array_mean(array,0)<<std::endl;
    return 0;
}