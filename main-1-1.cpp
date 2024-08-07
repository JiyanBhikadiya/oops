#include <iostream>

using namespace std;

int main(){
    double x = 5.5;
    char z = 'J';

    double* add_x = &x;
    char* add_y = &z;

    cout<<"Value of x = "<<*add_x<<endl;
    cout<<"Value of y = "<<*add_y<<endl;
    return 0;
}