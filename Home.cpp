#include "Home.h"

Home::Home() {
    this->numAppliance = 0;
    this->currentAppliance = 0;
    this->appliances = new Appliance*[numAppliance];
}

Home::Home(int numAppliance) {
    this->numAppliance = numAppliance;
    this->currentAppliance = 0;
    this->appliances = new Appliance*[numAppliance];
}

void Home::setNumAppliance(int numAppliance) {
    this->numAppliance = numAppliance;
}

int Home::getNumAppliance() {
    return this->numAppliance;
}

bool Home::addAppliance(Appliance* appliance) {
    if(currentAppliance < numAppliance){
        appliances[currentAppliance] = appliance;
        currentAppliance++;
        return true;
    }
    else{
        return false;
    }
}

double Home::getTotalPowerConsumption() {
    double totalPowerConsumption = 0;
    for(int i=0;i<currentAppliance;i++){
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }

    return totalPowerConsumption;
}