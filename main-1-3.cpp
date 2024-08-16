#include "Person.h"
#include <iostream>

extern Person* createPersonArray(int n);
extern PersonList createPersonList(int n);
extern PersonList deepCopyPersonList(PersonList  p1);

int main(){
    int n = 5;

    PersonList personList = createPersonList(n);
    PersonList personListCopy = deepCopyPersonList(personList);

    std::cout << "\nPersonList Copy:" << std::endl;
    for (int i = 0; i < personListCopy.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": "<< "Name: " << personListCopy.people[i].name<< ", Age: " << personListCopy.people[i].age<< std::endl;
    }

}