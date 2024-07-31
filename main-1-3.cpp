#include <iostream>

extern int num_count(int[], int, int);
int main(){
    int array[5] = {1,2,3,2,1}; //initialising variable

    std::cout<<num_count(array,5,2)<<std::endl; // printing returned value
    return 0;
}