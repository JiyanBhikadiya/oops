#include "Motorbike.h"

Motorbike::Motorbike() {
    this->timeOfEntry = time(0);
    this->ID = 0;
    this->parkingDuration = 0;
}

Motorbike::Motorbike(time_t timeOfEntry, int ID) : Vehicle(timeOfEntry,ID) {
    this->parkingDuration = 0;
}

int Motorbike::getParkingDuration() {
    parkingDuration = getTimeofEntry() - time(nullptr);
    return (int)parkingDuration * 0.85;
}

void Motorbike::setParkingDuration(int new_parkingDuration) {
    this->parkingDuration = new_parkingDuration;
}