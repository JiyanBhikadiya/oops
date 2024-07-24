#include <iostream>

int sum_two_arrays(int[], int[], int);

int main(){
    int array[5] = {1,2,3,4,5};
    int secondary[5] = {6,7,8,9,10};

    std::cout<<sum_two_arrays(array,secondary,5)<<std::endl;
    return 0;
}