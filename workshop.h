#include <iostream>

void changeValue(double* x){
    *x = 42;
    std::cout<<*x<<std::endl;
}