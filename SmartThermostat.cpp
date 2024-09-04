#include "SmartThermostat.h"

SmartThermostat::SmartThermostat() {
    this->powerRating = 0;
    this->temperature = 22;
    this->efficiency = 1;
}

SmartThermostat::SmartThermostat(int powerRating, double temperature,double efficiency) {
    this->powerRating = powerRating;
    this->temperature = temperature;
    this->efficiency = efficiency;
}

void SmartThermostat::setTemperature(double temperature) {
    this->temperature = temperature;
}

double SmartThermostat::getTemperature() {
    return this->temperature;
}

void SmartThermostat::setEfficiency(double efficiency) {
    this->efficiency = efficiency;
}

double SmartThermostat::getEfficiency() {
    return this->efficiency;
}

double SmartThermostat::getPowerConsumption(double hours) const {
    return this->powerRating*hours*(1+abs(this->temperature - 22) * (1-efficiency)); 
}