#include "Person.h"

PersonList createPersonList(int n){
    PersonList list;

    list.people = new Person[n];
    list.numPeople = n;

    for(int i=0;i<n;i++){
        list.people[i].name = "Jane Doe";
        list.people[i].age = 1;
    }

    return list;
}

PersonList deepCopyPersonList(PersonList p1){
    PersonList p2;

    p2.numPeople = p1.numPeople;
    p2.people = new Person[p2.numPeople];

    for (int i = 0; i < p2.numPeople; ++i) {
        p2.people[i].name = p1.people[i].name;
        p2.people[i].age = p1.people[i].age;
    }

    return p2;
}