#include "ParkingLot.h"

ParkingLot::ParkingLot() {
    maxCapacity = 0;
    currentCapacity = 0;
    maxNumOfVehicles = 0;
    vehicles = new Vehicle[maxNumOfVehicles];
}

ParkingLot::ParkingLot(int maxNumOfVehicles) {
    maxCapacity = 0;
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

        // cout<<"Vehicle "<<vehicleWaiting->getID()<<" Parked"<<endl;
    }
    else{
        cout<<"The lot is full"<<endl;
    }
}

void ParkingLot::unparkVehicle(int ID) {
    int isVehiclePresent = 0;
    for(int i=0;i<currentCapacity;i++){
        if(ID == vehicles[i].getID()){
            // cout<<"Vehicle "<<ID<<" Unparked"<<endl;
            isVehiclePresent = 1;
            currentCapacity--;
            for(int j = i;j<currentCapacity;j++){
                vehicles[i] = vehicles[j];
            }
        }
    }

    if(isVehiclePresent == 0){
        cout<<"Vehicle not in the lot."<<endl;
    }
}
