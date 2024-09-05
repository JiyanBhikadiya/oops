#include "Airplane.h"

Airplane::Airplane() {
    this->numPassengers = 0;
}

Airplane::Airplane(int w, int p) {
    this->weight = w;
    this->numPassengers = p;
    this->fuel = 100;
}

void Airplane::reducePassengers(int x) {
    this->numPassengers -= x;
    if(this->numPassengers < 0){
        this->numPassengers = 0;
    }
}

int Airplane::get_numPassengers() {
    return this->numPassengers;
}

void Airplane::fly(int headwind, int minutes) {
    float consumption;
    float fuelUsed = this->fuel;

    if (headwind < 60)
    {
        consumption = 0.25;           
    }
    else{
        consumption = 0.5;
    }

    consumption+=(numPassengers)*0.001;
    fuelUsed=fuelUsed-(consumption*minutes);
    if (fuelUsed>20)
    {
        numberOfFlights++;
        fuel=fuelUsed;
    }
}