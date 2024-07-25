#include <iostream>

extern void two_five_nine(int[], int);

int main(){
    int array[10] = {1,1,1,1,1,1,1,1,1,1};

    two_five_nine(array,10);
    return 0;
}