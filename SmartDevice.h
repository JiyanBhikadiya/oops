#ifndef SMARTDEVICE_H
#define SMARTDEVICE_H

#include <iostream>

using namespace std;

class SmartDevice{
    protected:
        int powerRating;
        bool isOn;
    public:
        SmartDevice();
        SmartDevice(int powerRating);

        void setPowerRating(int powerRating);
        int getPowerRating();
        
        void setIsOn(bool isOn);
        bool getIsOn();

        void turnOn();
        void turnOff();

        void getStatus();

        virtual double getPowerConsumption(double hours) const;

        ~SmartDevice();
};

#endif