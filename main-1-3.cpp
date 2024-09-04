#include "SmartThermostat.h"

int main(){
    SmartThermostat light1;

    cout<<"Power Rating= "<<light1.getPowerRating()<<"Temperature = "<<light1.getTemperature()<<"Efficiency = "<<light1.getEfficiency()<<"PowerConsumption = "<<light1.getPowerConsumption(5)<<endl;
    
    SmartThermostat light2(100,25,1.5);
    cout<<"Power Rating= "<<light2.getPowerRating()<<"Temperature = "<<light2.getTemperature()<<"Efficiency = "<<light2.getEfficiency()<<"PowerConsumption = "<<light2.getPowerConsumption(5)<<endl;
    
    SmartThermostat light3;
    light3.setPowerRating(200);
    light3.setTemperature(30);
    light3.setEfficiency(2);
    cout<<"Power Rating= "<<light3.getPowerRating()<<"Temperature = "<<light3.getTemperature()<<"Efficiency = "<<light3.getEfficiency()<<"PowerConsumption = "<<light3.getPowerConsumption(5)<<endl;

    return 0;
}