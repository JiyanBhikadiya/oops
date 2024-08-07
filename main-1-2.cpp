#include <iostream>

extern void modifyArray(double*,int,double);
int main(){
    double array[5] = {1.1,2.2,3.3,4.4,5.5};

    modifyArray(array,5,5.0);
    return 0;
}