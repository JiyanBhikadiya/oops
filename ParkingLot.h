#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "Vehicle.h"

class ParkingLot{
    private:
        int currentCapacity;
        int maxNumOfVehicles;
        Vehicle* vehicles;
    public:
        ParkingLot();
        ParkingLot(int maxNumOfVehicles);
        
        int getCount();
        
        void parkVehicle(Vehicle* vehicleWaiting);
        void unparkVehicle(int ID);

        int countOverStayingVehicles(int maxParkingDuration);
};

#endif