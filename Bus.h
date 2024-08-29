#ifndef BUS_H
#define BUS_H

#include "Vehicle.h"

class Bus : public Vehicle{
    private:
        int parkingDuration;
    public:
        Bus();
        Bus(time_t timeOfEntry,int ID);
        
        int getParkingDuration();
        void setParkingDuration(int new_parkingDuration);
};

#endif