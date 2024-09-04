#include "SmartDevice.h"

#include <iostream>

using namespace std;

int main(){
    SmartDevice device1;


    cout<<"Power Rating = "<<device1.getPowerRating()<<"Consumption = "<<device1.getPowerConsumption(5)<<endl;
    device1.getStatus();

    SmartDevice device2(100);
    device2.turnOn();
    cout<<"Power Rating = "<<device2.getPowerRating()<<"Consumption = "<<device2.getPowerConsumption(5)<<endl;
    device2.getStatus();

    SmartDevice device3;
    device3.setPowerRating(200);
    device3.setIsOn(true);
    device3.turnOff();
    cout<<"Power Rating = "<<device3.getPowerRating()<<"Consumption = "<<device3.getPowerConsumption(5)<<endl;
    device3.getStatus();
    return 0;
}