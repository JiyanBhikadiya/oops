#include "Bus.h"

Bus::Bus() {
    this->timeOfEntry = time(0);
    this->ID = 0;
    this->parkingDuration = 0;
}

Bus::Bus(int ID) : Vehicle(ID) {
    this->parkingDuration = 0;
}

int Bus::getParkingDuration() {
    parkingDuration = getTimeofEntry() - time(nullptr);
    return (int)parkingDuration * 0.75;
}

void Bus::setParkingDuration(int new_parkingDuration) {
    this->parkingDuration = new_parkingDuration;
}