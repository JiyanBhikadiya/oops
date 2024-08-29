#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car : public Vehicle{
    private:
        int parkingDuration;
    public:
        Car();
        Car(int ID);
        
        int getParkingDuration();
        void setParkingDuration(int new_parkingDuration);
};

#endif