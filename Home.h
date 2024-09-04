#ifndef HOME_H
#define HOME_H

#include "Appliance.h"

class Home : public Appliance{
    private:
        Appliance** appliances;
        int numAppliance;
        int currentAppliance;

    public:
        Home();
        Home(int numAppliance);

        void setNumAppliance(int numAppliance);
        int getNumAppliance();

        bool addAppliance(Appliance* appliance);

        double getTotalPowerConsumption();
};

#endif