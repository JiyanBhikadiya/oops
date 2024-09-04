#include "Fridge.h"

Fridge::Fridge() {
    Appliance(0);
    this->volume = 0;
}

Fridge::Fridge(int powerRating, double volume) {
    this->powerRating = powerRating;
    this->volume = volume;
}

void Fridge::setVolume(double volume) {
    this->volume = volume;
}

double Fridge::getVolume() {
    return this->volume;
}

double Fridge::getPowerConsumption() {
    return this->powerRating * 24 * (this->volume / 100);
}