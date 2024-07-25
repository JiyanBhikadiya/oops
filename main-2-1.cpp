#include <iostream>

extern int min_element(int array[],int n);

int main(){
    int array[5] = {-1,2,-4,5,0};

    std::cout<<min_element(array,5)<<std::endl;
    return 0;
}