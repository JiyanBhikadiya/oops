#include "AirVehicle.h"

#include <iostream>

using namespace std;

int main(){

    AirVehicle vehicle1;
    cout<<"Flight1:- Weight = "<<vehicle1.get_weight()<<"Fuel = "<<vehicle1.get_fuel()<<endl;

    AirVehicle vehicle2(500);
    vehicle2.refuel();
    cout<<"Flight2:- Weight = "<<vehicle2.get_weight()<<"Fuel = "<<vehicle2.get_fuel()<<endl;

    AirVehicle vehicle3;
    vehicle3.set_weight(100);
    vehicle3.set_fuel(20);
    vehicle3.fly(20,45);
    cout<<"Flight3:- Weight = "<<vehicle3.get_weight()<<"Fuel = "<<vehicle3.get_fuel()<<endl;

    cout<<"Number of flights in air = "<<vehicle3.get_numberOfFlights()<<endl;

    return 0;
}