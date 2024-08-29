#include "ParkingLot.h"

ParkingLot::ParkingLot() {
    currentCapacity = 0;
    maxNumOfVehicles = 0;
    vehicles = new Vehicle[maxNumOfVehicles];
}

ParkingLot::ParkingLot(int maxNumOfVehicles) {
    currentCapacity = 0;
    this->maxNumOfVehicles = maxNumOfVehicles;
    vehicles = new Vehicle[maxNumOfVehicles];
}

int ParkingLot::getCount() {
    return currentCapacity;
}

void ParkingLot::parkVehicle(Vehicle* vehicleWaiting) {
    if(currentCapacity < maxNumOfVehicles){
        vehicles[currentCapacity] = vehicleWaiting->getID();
        currentCapacity++;
    }
    else{
        cout<<"The lot is full"<<endl;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    bool isVehiclePresent = false;
    for(int i=0;i<currentCapacity;i++){
        if(ID == vehicles[i].getID()){
            for(int j = i;j<currentCapacity-1;j++){
                vehicles[j] = vehicles[j+1];
            }
            isVehiclePresent = true;
        }
    }

    if(!isVehiclePresent){
        cout<<"Vehicle not in the lot"<<endl;
    }
    else{
        currentCapacity--;
    }
}