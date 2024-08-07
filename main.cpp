#include <iostream>

extern void changeValue(double*);

int main(){
    double x = 30;
    
    changeValue(&x);
}