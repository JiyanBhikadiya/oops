#include "SmartLight.h"

SmartLight::SmartLight() {
    this->powerRating = 0;
    this->brightness = 0.5;
}

SmartLight::SmartLight(int powerRating, double brightness) {
    this->powerRating = powerRating;
    this->brightness = brightness;
}

void SmartLight::setBrightness(double brightness) {
    this->brightness = brightness;
}

double SmartLight::getBrightness() const {
    return this->brightness;
}

double SmartLight::getPowerConsumption(double hours) {
    return this->powerRating*this->brightness*hours;
}
