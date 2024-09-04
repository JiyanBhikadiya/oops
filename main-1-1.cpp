#include "AirVehicle.h"

#include <iostream>

using namespace std;

int main(){

    AirVehicle vehicle1;
    cout<<"Flight1:- Weight = "<<vehicle1.getWeight()<<"Fuel = "<<vehicle1.getFuel()<<endl;

    AirVehicle vehicle2(500);
    vehicle2.refuel();
    cout<<"Flight2:- Weight = "<<vehicle2.getWeight()<<"Fuel = "<<vehicle2.getFuel()<<endl;

    AirVehicle vehicle3;
    vehicle3.setWeight(100);
    vehicle3.setFuel(20);
    vehicle3.fly(20,45);
    cout<<"Flight3:- Weight = "<<vehicle3.getWeight()<<"Fuel = "<<vehicle3.getFuel()<<endl;

    cout<<"Number of flights in air = "<<vehicle3.getNumberOfFlights()<<endl;

    return 0;
}