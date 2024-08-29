#include "Vehicle.h"

Vehicle::Vehicle() {
    this->timeOfEntry = time(0);
    this->ID = 0;
}

Vehicle::Vehicle(int ID) {
    this->timeOfEntry = time(0);
    this->ID = ID;
}

int Vehicle::getID() {
    return ID;
}

time_t Vehicle::getTimeofEntry() {
    return timeOfEntry;
}

void Vehicle::setID(int new_ID) {
    new_ID = ID;
}

void Vehicle::setTimeOfEntry(time_t new_timeOfEntry) {
    timeOfEntry = new_timeOfEntry;
}

Vehicle::~Vehicle() {

}