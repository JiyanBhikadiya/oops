#include "Appliance.cpp"

using namespace std;

int main(){

    Appliance appliance(2000);

    appliance.set_powerRating(1000);

    cout<<"Power Rating = "<<appliance.get_powerRating()<<endl;

    appliance.turnOn();

    if(appliance.get_isOn()){
        cout<<"Appliance is on"<<endl;
    }
    else{
        cout<<"Appliance is off"<<endl;
    }

    appliance.turnOff();

    cout<<"Power Consumption = "<<appliance.getPowerConsumption()<<endl;
    return 0;
}