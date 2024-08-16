#include "Person.h"
#include <iostream>
#include <string>

extern Person* createPersonArray(int n);

int main(){
    int n;

    std::cout<<"Enter any number:- "<<std::endl;
    std::cin>>n;

    Person* array = createPersonArray(n);

    for(int i=0;i<n;i++){
        std::cout<<i+1<<" "<<array[i].name<<" "<<array[i].age<<std::endl;
    }
}