#ifndef APPLIANCE_H
#define APPLIANCE_H

#include <iostream>

using namespace std;

class Appliance{
    protected:
        int powerRating;
        bool isOn;

    public:
        Appliance();
        Appliance(int powerRating);

        int get_powerRating();
        void set_powerRating(int new_powerRating);

        bool get_isOn();
        void set_isOn(bool new_isOn);

        void turnOn();
        void turnOff();

        virtual double getPowerConsumption();
};

#endif