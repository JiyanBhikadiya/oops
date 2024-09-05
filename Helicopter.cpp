#include "Helicopter.h"

Helicopter::Helicopter() {
    this->name = "";
}

Helicopter::Helicopter(int w, string n) {
    this->weight = w;
    this->name = n;
    this->fuel = 100;
}

string Helicopter::get_name() {
    return this->name;
}

void Helicopter::set_name(string name) {
    this->name = name;
}

void Helicopter::fly(int headwind, int minutes) {
    float consumption = 0.18;
    float fuelc=fuel;

    if (headwind < 40)
    {
        if (weight > 5670) 
        {
            consumption+=(weight-5670)*0.01;
        }
        fuelc=fuelc-(consumption*minutes);
        if (fuelc>20)
        {
            numberOfFlights++;
            fuel=fuelc;
        }            
    }
    else{
        consumption = 0.4;
        if (weight > 5670) 
        {
            consumption+=(weight-5670)*0.01;
        }
        fuelc=fuelc-(consumption*minutes);
        if (fuelc>20)
        {
            numberOfFlights++;
            fuel=fuelc;
        }
    }
}