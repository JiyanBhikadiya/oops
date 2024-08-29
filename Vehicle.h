#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle{
    protected:
        time_t timeOfEntry;
        int ID;
    public:
        Vehicle();
        Vehicle(time_t timeOfEntry,int ID);
        
        int getID();
        time_t getTimeofEntry();

        void setID(int new_ID);
        void setTimeOfEntry(time_t new_timeOfEntry);

        ~Vehicle();
};

#endif