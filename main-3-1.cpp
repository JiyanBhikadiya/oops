#include "Home.h"
#include "Fridge.h"
#include "TV.h"
#include "Appliance.h"

int main(){

    Home home(2);

    Fridge* fridge1 = new Fridge;
    Fridge* fridge2 = new Fridge;
    TV* tv1 = new TV;
    TV* tv2 = new TV;
    
    fridge1->set_powerRating(100);
    fridge1->setVolume(1000);
    fridge2->set_powerRating(200);
    fridge2->setVolume(2000);

    tv1->set_powerRating(100);
    tv1->setScreenSize(55);
    tv2->set_powerRating(200);
    tv2->setScreenSize(65);


    if(home.addAppliance(fridge1)){
        cout<<"Appliance added"<<endl;
    }
    else{
        cout<<"No space left"<<endl;
    }
    if(home.addAppliance(tv1)){
        cout<<"Appliance added"<<endl;
    }
    else{
        cout<<"No space left"<<endl;
    }
    if(home.addAppliance(fridge2)){
        cout<<"Appliance added"<<endl;
    }
    else{
        cout<<"No space left"<<endl;
    }
    if(home.addAppliance(tv2)){
        cout<<"Appliance added"<<endl;
    }
    else{
        cout<<"No space left"<<endl;
    }

    cout<<"Total power consumption = "<<home.getTotalPowerConsumption()<<endl;
    return 0;
}