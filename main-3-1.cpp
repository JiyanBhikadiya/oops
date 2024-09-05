#include "AirFleet.h"

int main(){

    AirFleet fleet;
    AirVehicle** vehicle = fleet.get_fleet();

    for(int i=0;i<5;i++){
        cout<<"Vehicle"<<i<<":- Weight = "<<vehicle[i]->get_weight()<<" Fuel = "<<vehicle[i]->get_fuel()<<endl;
    }
    
    return 0;
}