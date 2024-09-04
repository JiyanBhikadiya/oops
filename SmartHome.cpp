#include "SmartHome.h"

SmartHome::SmartHome() {
    this->maxDevice = 0;
    this->currentDevice = 0;
    this->devices = new SmartDevice*[maxDevice];
}

SmartHome::SmartHome(int maxDevice) {
    this->maxDevice = maxDevice;
    this->currentDevice = 0;
    this->devices = new SmartDevice*[maxDevice];
}

bool SmartHome::addDevice(SmartDevice* device) {
    if(currentDevice<maxDevice){
        devices[currentDevice] = device;
        currentDevice++;
        return true;
    }
    else{
        return false;
    }
}

double SmartHome::getTotalPowerConsumption(double hours) {
    double total = 0;
    for(int i=0;i<currentDevice;i++){
        total += devices[i]->getPowerConsumption(5);
    }

    return total;
}
