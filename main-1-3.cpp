#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    ParkingLot parking(10);
    string typeOfVehicelParked = "";
    Vehicle* vehicle;
    int count = 0;

    for(int i=0;i<5;i++){
        vehicle = new Car(i);
        parking.parkVehicle(vehicle);
    }
    for(int i=6;i<9;i++){
        vehicle = new Bus(i);
        parking.parkVehicle(vehicle);
    }
    for(int i=9;i<11;i++){
        vehicle = new Motorbike(i);
        parking.parkVehicle(vehicle);
    }

    cout<<"Number of vehicles overstayed = "<<parking.countOverstayingVehicles(15)<<endl;
    return 0;
}