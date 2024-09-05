#include "Airplane.cpp"


int main(){
    Airplane plane1;
    cout<<"Helicopter1:- Name = "<<plane1.get_name()<<"Weight = "<<plane1.get_weight()<<"Fuel= "<<plane1.get_fuel()<<endl;

    Airplane plane2(5670,"plane");
    cout<<"Helicopter1:- Name = "<<plane2.get_name()<<"Weight = "<<plane2.get_weight()<<"Fuel= "<<plane2.get_fuel()<<endl;

    Airplane plane3;
    heli3.set_weight(5690);
    heli3.set_fuel(80);
    heli3.fly(45,10);
    cout<<"Helicopter1:- Name = "<<heli3.get_name()<<"Weight = "<<heli3.get_weight()<<"Fuel= "<<heli3.get_fuel()<<endl;
    return 0;
}