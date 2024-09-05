#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "AirVehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Helicopter : public AirVehicle{
    private:
        string name;

    public:
        Helicopter();
        Helicopter(int w,string n);

        string getName();
        void setName(string name);

        void fly(int headwind, int minutes);
};

#endif