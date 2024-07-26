#include <iostream>

extern double sum_even(double[] , int);

int main(){
    double array[5] = {1.1,2.2,3.3,4.4,5.5};

    std::cout<<sum_even(array,5)<<std::endl;
    return 0;
}