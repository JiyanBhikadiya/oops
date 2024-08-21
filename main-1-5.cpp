#include "Cage.h"

#include <string>
#include <iostream>

using namespace std;

int main(){

    Cage c1;
    cout<<"Cage-1:- "<<c1.getName()<<" Id = "<<c1.getIDnum()<<endl;

    Cage c2("Abc",123);
    cout<<"Cage-2:- "<<c2.getName()<<" Id = "<<c2.getIDnum()<<endl;

    return 0;
}