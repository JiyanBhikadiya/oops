#include "Cage.h"
#include "Clinic.h"

#include <string.h>
#include <iostream>

int main(){
    Clinic cli1("XYZ",3);

    Cage c1("A",1);
    Cage c2("B",2);
    Cage c3("C",3);
    Cage c4("D",4);

    if(cli1.addCage(c1)){
        cout<<"Cage-1 succesfully added"<<endl;
    }
    else{
        cout<<"Cage-1 not added"<<endl;
    }
    if(cli1.addCage(c2)){
        cout<<"Cage-2 succesfully added"<<endl;
    }
    else{
        cout<<"Cage-2 not added"<<endl;
    }
    if(cli1.addCage(c3)){
        cout<<"Cage-3 succesfully added"<<endl;
    }
    else{
        cout<<"Cage-3 not added"<<endl;
    }
    if(cli1.addCage(c4)){
        cout<<"Cage-4 succesfully added"<<endl;
    }
    else{
        cout<<"Cage-4 not added"<<endl;
    }

    cout<<"Total Cages:- "<<cli1.getNumber_of_cages()<<endl;
    cout<<"Clinic name:- "<<cli1.getName()<<endl;

    if(cli1.has_cage("C")){
        cout<<"C present"<<endl;
    }
    else{
        cout<<"C absent"<<endl;
    }

    Cage* cages = cli1.getCages();
    for(int i=0;i<cli1.getNumber_of_cages();i++){
        cout<<"Cage:- "<<i+1<<" "<<cages[i].getName()<<" ID = "<<cages[i].getIDnum()<<endl;
    }
    return 0;
}