#ifndef SMARTTHERMOSTAT_H
#define SMARTTHERMOSTAT_H

#include "SmartDevice.h"

class SmartThermostat : public SmartDevice{
    private:
        double temperature;
        double efficiency;

    public:
        SmartThermostat();
        SmartThermostat(int powerRating, double temperature, double efficiency);

        void setTemperature(double temperature);
        double getTemperature();

        void setEfficiency(double efficiency);
        double getEfficiency();

        double getPowerConsumption(double hours) const;
};

#endif