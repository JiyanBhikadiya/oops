#include "SmartLight.h"

int main(){
    SmartLight light1;

    cout<<"Power Rating= "<<light1.getPowerRating()<<"Brightness = "<<light1.getBrightness()<<"PowerConsumption = "<<light1.getPowerConsumption(5)<<endl;
    
    SmartLight light2(100,1);
    cout<<"Power Rating= "<<light2.getPowerRating()<<"Brightness = "<<light2.getBrightness()<<"PowerConsumption = "<<light2.getPowerConsumption(5)<<endl;
    
    SmartLight light3;
    light3.setPowerRating(200);
    light3.setBrightness(2);
    cout<<"Power Rating= "<<light3.getPowerRating()<<"Brightness = "<<light3.getBrightness()<<"PowerConsumption = "<<light3.getPowerConsumption(5)<<endl;
    return 0;
}