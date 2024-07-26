#include <iostream>

extern int median_array(int[] , int);

int main(){
    int array[5] = {11,2,33,4,55};

    std::cout<<median_array(array,5)<<std::endl;
    return 0;
}