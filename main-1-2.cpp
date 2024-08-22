#include "Truck.h"
#include "Truck_yard.h"

#include <string>
#include <iostream>

using namespace std;

int main(){
    Truck_yard yard(3);

    Truck t1(2005,"Mahindra");
    Truck t2(1984,"Tata");
    Truck t3(1999,"Hundai");
    Truck t4(2006,"Safari");

    if(yard.addStock(t1)){
        cout<<"Truck 1 added succesfully."<<endl;
    }
    else{
        cout<<"Truck 1 can not be added capacity full."<<endl;
    }
    if(yard.addStock(t2)){
        cout<<"Truck 2 added succesfully."<<endl;
    }
    else{
        cout<<"Truck 2 can not be added capacity full."<<endl;
    }
    if(yard.addStock(t3)){
        cout<<"Truck 3 added succesfully."<<endl;
    }
    else{
        cout<<"Truck 3 can not be added capacity full."<<endl;
    }
    if(yard.addStock(t4)){
        cout<<"Truck 4 added succesfully."<<endl;
    }
    else{
        cout<<"Truck 4 can not be added capacity full."<<endl;
    }

    cout<<"Total number of trucks = "<<yard.get_total_stock_count()<<endl;

    cout<<"Truck with code 2005 has count of "<<yard.get_stock_count(1999)<<endl;

    Truck* all_trucks = yard.get_current_stock_list();
    for(int i=0;i<yard.get_total_stock_count();i++){
        cout<<"Truck "<<i+1<<":- Brand Name:- "<<all_trucks[i].get_brand_name()<<", Brand code Number:- "<<all_trucks[i].get_brand_code()<<endl;
    }
    return 0;
}