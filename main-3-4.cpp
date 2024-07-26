#include <iostream>

extern void print_pass_fail(char);

int main(){
    char grade = 'A'; //initialising variable

    print_pass_fail(grade); // calling the function and passing grade as the parameter
    return 0;
}