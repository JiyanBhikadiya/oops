#include "Helicopter.h"

int main(){
    Helicopter heli1;
    cout<<"Helicopter1:- Name = "<<heli1.get_name()<<"Weight = "<<heli1.get_weight()<<"Fuel= "<<heli1.get_fuel()<<endl;

    Helicopter heli2(5670,"Heli");
    cout<<"Helicopter1:- Name = "<<heli2.get_name()<<"Weight = "<<heli2.get_weight()<<"Fuel= "<<heli2.get_fuel()<<endl;

    Helicopter heli3;
    heli3.set_weight(5690);
    heli3.set_fuel(80);
    heli3.fly(45,10);
    cout<<"Helicopter1:- Name = "<<heli3.get_name()<<"Weight = "<<heli3.get_weight()<<"Fuel= "<<heli3.get_fuel()<<endl;
}