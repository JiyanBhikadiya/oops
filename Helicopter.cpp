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
    double fuelUsed;

    if(headwind > 45){
        fuelUsed = 0.4*minutes;

        if(this->weight > 5670){
            fuelUsed += (this->weight - 5670) * 0.01;
        }
    }
    else{
        fuelUsed = 0.18*minutes;
        
        if(this->weight > 5670){
            fuelUsed += (this->weight - 5670) * 0.01;
        }
    }

    this->fuel -= fuelUsed;

    if(this->fuel < 20){
        this->fuel += fuelUsed;
    }
    else{
        this->numberOfFlights++;
    }
}
