#ifndef SMARTLIGHT_H
#define SMARTLIGHT_H

#include "SmartDevice.h"

class SmartLight : public SmartDevice{
    private:
        double brightness;

    public:
        SmartLight();
        SmartLight(int powerRating,double brightness);

        void setBrightness(double brightness);
        double getBrightness() const;

        double getPowerConsumption(double hours);
};

#endif