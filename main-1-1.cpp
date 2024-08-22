#include "Truck.h"

#include <string>
#include <iostream>

using namespace std;

int main(){

    Truck t1;
    cout<<"Truck-1:- Brand Name = "<<t1.get_brand_name()<<", Brand Code Number = "<<t1.get_brand_code()<<endl; //printing result with all methods used

    Truck t2(2005,"Mahindra"); //defining a object t2
    cout<<"Truck-2:- Brand Name = "<<t2.get_brand_name()<<", Brand Code Number = "<<t2.get_brand_code()<<endl;

    return 0;
}