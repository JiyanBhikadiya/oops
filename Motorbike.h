#ifndef MOTORBIKE_H
#define MOTORBIKE_H

#include "Vehicle.h"

class Motorbike : public Vehicle{
    private:
        int parkingDuration;
    public:
        Motorbike();
        Motorbike(time_t timeOfEntry,int ID);
        
        int getParkingDuration();
        void setParkingDuration(int new_parkingDuration);
};

#endif