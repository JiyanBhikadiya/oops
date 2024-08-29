#include "ParkingLot.h"
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main(){
    ParkingLot parking(10);
    string typeOfVehicelParked = "";
    Vehicle* vehicle;
    int count = 0;

    while(true){
        cout<<"Enter the type of vehicle they want to park:- "<<endl;
        cin>>typeOfVehicelParked;

        if(typeOfVehicelParked == "car"){
            count++;
            vehicle = new Car(count);
            parking.parkVehicle(vehicle);
        }
        if(typeOfVehicelParked == "bus"){
            count++;
            vehicle = new Bus(count);
            parking.parkVehicle(vehicle);
        }
        if(typeOfVehicelParked == "motorbike"){
            count++;
            vehicle = new Motorbike(count);
            parking.parkVehicle(vehicle);
        }

        if(count == 11){
            break;
        }
    }

    cout<<"Number of vehicles overstayed = "<<parking.countOverstayingVehicles(15)<<endl;
    return 0;
}