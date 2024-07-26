#include <iostream>

void print_pass_fail(char grade){
    switch (grade) //creating a switch case to check for the grades
    {
    case 'A':
    case 'B':
    case 'C':
        std::cout<<"Pass"<<std::endl; //printing message accordingly
        break;
    case 'D':
    case 'E':
        std::cout<<"Fail"<<std::endl;
        break;
    default:
        std::cout<<"Nothing"<<std::endl;
        break;
    }
}