#include "Car.h"

Car::Car() {
    this->timeOfEntry = time(0);
    this->ID = 0;
    this->parkingDuration = 0;
}

Car::Car(int ID) : Vehicle(ID) {
    this->parkingDuration = 0;
}

int Car::getParkingDuration() {
    parkingDuration = getTimeofEntry() - time(nullptr);
    return (int)parkingDuration * 0.9;
}

void Car::setParkingDuration(int new_parkingDuration) {
    this->parkingDuration = new_parkingDuration;
}