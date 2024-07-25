#include <iostream>

extern int max_element(int array[],int n);

int main(){
    int array[5] = {-1,2,-4,5,0};

    std::cout<<max_element(array,5)<<std::endl;
    return 0;
}