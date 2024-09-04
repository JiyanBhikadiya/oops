#ifndef SMARTHOME_H
#define SMARTHOME_H

#include "SmartDevice.h"

class SmartHome : public SmartDevice{
    private:
        SmartDevice** devices;
        int maxDevice;
        int currentDevice;
    public:
        SmartHome();
        SmartHome(int maxDevice);

        bool addDevice(SmartDevice* device);
        double getTotalPowerConsumption(double hours);
};

#endif