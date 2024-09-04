#include "TV.h"

TV::TV() {
    Appliance(0);
    this->screenSize = 0;
}

TV::TV(int powerRating, double screenSize) {
    this->powerRating = powerRating;
    this->screenSize = screenSize;
}

void TV::setScreenSize(double screenSize) {
    this->screenSize = screenSize;
}

double TV::getScreenSize() {
    return this->screenSize;
}

double TV::getPowerConsumption() {
    return this->powerRating * (this->screenSize / 10);
}
