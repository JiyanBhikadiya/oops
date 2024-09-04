#include "Appliance.h"

Appliance::Appliance() {
    this->powerRating = 0;
    this->isOn = false;
}

Appliance::Appliance(int powerRating) {
    this->powerRating = powerRating;
    this->isOn = false;
}

int Appliance::get_powerRating() {
    return this->powerRating;
}

void Appliance::set_powerRating(int new_powerRating) {
    this->powerRating = new_powerRating;
}

bool Appliance::get_isOn() { 
    return this->isOn;
}

void Appliance::set_isOn(bool new_isOn) {
    this->isOn = new_isOn;
}

void Appliance::turnOn() {
    this->isOn = true;
}

void Appliance::turnOff() {
    this->isOn = false;
}

double Appliance::getPowerConsumption() {
    return 0; 
}