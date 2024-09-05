#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "AirVehicle.h"
#include <iostream>
#include <string>
using namespace std;

class Airplane : public AirVehicle{
    private:
        int numPassengers;

    public:
        Airplane();                       
        Airplane(int w, int p);

        void reducePassengers(int x);     // reduce passenger list by x
        int get_numPassengers();
        void fly(int headwind, int minutes); 
};

#endif