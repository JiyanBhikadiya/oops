#include "Motorbike.h"

Motorbike::Motorbike() {
    this->timeOfEntry = time(0);
    this->ID = 0;
    this->parkingDuration = 0;
}

Motorbike::Motorbike(int ID) : Vehicle(ID) {
    this->parkingDuration = 0;
}

int Motorbike::getParkingDuration() {
    parkingDuration = getTimeofEntry() - time(nullptr) + 3600;
    return (int)parkingDuration * 0.85;
}

void Motorbike::setParkingDuration(int new_parkingDuration) {
    this->parkingDuration = new_parkingDuration;
}