#include "TV.h"

int main(){

    TV* tv = new TV;

    tv->set_powerRating(2000);
    tv->setScreenSize(55);

    cout<<"Power consumed by tv = "<<tv->getPowerConsumption()<<endl;

    return 0;
}