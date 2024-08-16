#include "Person.h"
#include <iostream>

extern PersonList createPersonList(int n);

int main(){
    int n;

    std::cout<<"Enter any number:- "<<std::endl;
    std::cin>>n;

    PersonList list = createPersonList(n);
    for(int i=0;i<list.numPeople;i++){
        std::cout<<i+1<<" "<<list.people[i].name<<" "<<list.people[i].age<<std::endl;
    }
    
    return 0;
}