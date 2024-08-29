#include "Vehicle.h"

Vehicle::Vehicle() {
    this->timeOfEntry = timeOfEntry;
    this->ID = ID;
}

Vehicle::Vehicle(time_t timeOfEntry, int ID) {
    this->timeOfEntry = timeOfEntry;
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