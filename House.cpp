#include "House.h"

House::House() {
    this->numAppliance = 0;
    this->currentAppliance = 0;
    this->appliances = new Appliance*[numAppliance];
}

House::House(int numAppliance) {
    this->numAppliance = numAppliance;
    this->currentAppliance = 0;
    this->appliances = new Appliance*[numAppliance];
}

void House::setNumAppliance(int numAppliance) {
    this->numAppliance = numAppliance;
}

int House::getNumAppliance() {
    return this->numAppliance;
}

bool House::addAppliance(Appliance* appliance) {
    if(currentAppliance < numAppliance){
        appliances[currentAppliance] = appliance;
        currentAppliance++;
        return true;
    }
    else{
        return false;
    }
}

double House::getTotalPowerConsumption() {
    double totalPowerConsumption = 0;
    for(int i=0;i<currentAppliance;i++){
        totalPowerConsumption += appliances[i]->getPowerConsumption();
    }

    return totalPowerConsumption;
}