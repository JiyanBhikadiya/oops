#include <iostream>

extern int count_evens(int);

int main(){

    std::cout<<count_evens(10)<<std::endl; // printing returned value
    return 0;
}