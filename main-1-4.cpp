#include "SmartHome.h"
#include "SmartLight.h"
#include "SmartThermostat.h"
#include "SmartDevice.h"

int main(){
    SmartHome home(3);

    SmartLight* light1 = new SmartLight;
    SmartLight* light2 = new SmartLight;
    SmartThermostat* light3 = new SmartThermostat;
    SmartThermostat* light4 = new SmartThermostat;

    light1->setPowerRating(100);
    light1->setBrightness(1);

    light2->setPowerRating(200);
    light2->setBrightness(1);

    light3->setPowerRating(300);
    light3->setTemperature(25);
    light3->setEfficiency(0.5);

    if(home.addDevice(light1)){
        cout<<"Device added"<<endl;
    }
    else{
        cout<<"Device not added"<<endl;
    }
    if(home.addDevice(light2)){
        cout<<"Device added"<<endl;
    }
    else{
        cout<<"Device not added"<<endl;
    }
    if(home.addDevice(light3)){
        cout<<"Device added"<<endl;
    }
    else{
        cout<<"Device not added"<<endl;
    }
    if(home.addDevice(light4)){
        cout<<"Device added"<<endl;
    }
    else{
        cout<<"Device not added"<<endl;
    }
    
    cout<<"Total = "<<home.getTotalPowerConsumption(5)<<endl;
    return 0;
}