#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House : public Appliance{
    private:
        Appliance** appliances;
        int numAppliance;
        int currentAppliance;

    public:
        House();
        House(int numAppliance);

        void setNumAppliance(int numAppliance);
        int getNumAppliance();

        bool addAppliance(Appliance* appliance);

        double getTotalPowerConsumption();
};

#endif