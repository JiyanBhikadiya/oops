#include "Airplane.h"


int main(){
    Airplane plane1;
    cout<<"Plane1:- Passengers = "<<plane1.get_numPassengers()<<"Weight = "<<plane1.get_weight()<<"Fuel= "<<plane1.get_fuel()<<endl;

    Airplane plane2(5670,100);
    cout<<"Plane1:- Passengers = "<<plane2.get_numPassengers()<<"Weight = "<<plane2.get_weight()<<"Fuel= "<<plane2.get_fuel()<<endl;

    Airplane plane3;
    plane3.set_weight(5690);
    plane3.set_fuel(80);
    plane3.fly(45,10);
    cout<<"Plane1:- Passengers = "<<plane3.get_numPassengers()<<"Weight = "<<plane3.get_weight()<<"Fuel= "<<plane3.get_fuel()<<endl;
    return 0;
}