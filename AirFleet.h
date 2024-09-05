#ifndef AIRFLEET_H
#define AIRFLEET_H

#include"AirVehicle.h"
#include"Airplane.h"
#include"Helicopter.h"

#include <iostream>

using namespace std;

class AirFleet : public AirVehicle{
    protected:
        AirVehicle *fleet[5];
    public:
        AirFleet();
        AirVehicle **get_fleet();
};

#endif