#include "SmartDevice.h"

SmartDevice::SmartDevice() {
    this->powerRating = powerRating;
    this->isOn = false;
}

SmartDevice::SmartDevice(int powerRating) {
    this->powerRating = powerRating;
    this->isOn = false;
}

void SmartDevice::setPowerRating(int powerRating) {
    this->powerRating = powerRating;
}

int SmartDevice::getPowerRating() { 
    return this->powerRating;
}

void SmartDevice::setIsOn(bool isOn) {
    this->isOn = isOn;
}

bool SmartDevice::getIsOn() {
    return this->isOn;
}

void SmartDevice::turnOn() {
    this->isOn = true;
}

void SmartDevice::turnOff() {
    this->isOn = false;
}

void SmartDevice::getStatus() {
    if(this->isOn){
        cout<<"Device is On"<<endl;

    }
    else{
        cout<<"Device is Off"<<endl;
    }
}

double SmartDevice::getPowerConsumption(double hours) const {
    return powerRating * hours;
}

SmartDevice::~SmartDevice() {}