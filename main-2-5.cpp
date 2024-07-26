#include <iostream>

extern bool is_descending(int[],int n);

int main(){
    int array[5] = {100,50,30,14,5};
    
    std::cout<<is_descending(array,5)<<std::endl;
    return 0;
}