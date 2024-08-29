#include "Vehicle.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main(){
    int numOfVehicles;
    
    cout<<"Enter the number of vehicles:- "<<endl;
    cin>>numOfVehicles;

    Vehicle* vehicle = new Vehicle[numOfVehicles];

    for(int i=0;i<numOfVehicles;i++){
        int ID;
        string vechicleType; 
        
        cout<<"Enter Id of vehicle"<<endl;
        cin>>ID;

        cout<<"Enter type of vehicle"<<endl;
        cin>>vechicleType;

        if(vechicleType == "car"){
            Car car(ID);
            car.setTimeOfEntry(car.getParkingDuration());
            vehicle[i] = car;
        }
        if(vechicleType == "bus"){
            Bus bus(ID);
            bus.setTimeOfEntry(bus.getParkingDuration());
            vehicle[i] = bus;
        }
        if(vechicleType == "motorbike"){
            Motorbike motorbike(ID);
            motorbike.setTimeOfEntry(motorbike.getParkingDuration());
            vehicle[i] = motorbike;
        }
    }

    for(int i=0;i<numOfVehicles;i++){
        cout<<"Id:- "<<vehicle[i].getID()<<", Parking Duration = "<<vehicle[i].getTimeofEntry()<<endl;
    }

    return 0;
}