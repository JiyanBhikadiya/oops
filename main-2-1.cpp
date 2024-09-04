#include "Fridge.h"

int main(){

    Fridge* fridge = new Fridge;

    fridge->set_powerRating(2000);
    fridge->setVolume(1000);

    cout<<"Power consumed by fridge = "<<fridge->getPowerConsumption()<<endl;

    return 0;
}