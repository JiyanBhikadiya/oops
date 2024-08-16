#include <iostream>
#include "Person.h"

Person* createPersonArray(int n);
PersonList createPersonList(int n);
PersonList shallowCopyPersonList(PersonList pl);

int main(){
    int n=5;
    PersonList personList = createPersonList(n);
    PersonList personListShallowCopy = shallowCopyPersonList(personList);
    for (int i = 0; i < personListShallowCopy.numPeople; ++i) {
        std::cout << "Person " << i + 1 << ": "<< "Name: " << personListShallowCopy.people[i].name<< ", Age: " << personListShallowCopy.people[i].age<< std::endl;
    }

    return 0;
}