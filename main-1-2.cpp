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

    if(yard.addStock(t1)){ //calling the add.stock method and passing t1 into it if added than it will return true else false
        cout<<"Truck 1 added succesfully."<<endl; //message for truck added
    }
    else{
        cout<<"Truck 1 can not be added capacity full."<<endl; //message for truck not added
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

    cout<<"Total number of trucks = "<<yard.get_total_stock_count()<<endl; //printing total number of trucks by calling the appropriate method

    cout<<"Truck with code 2005 has count of "<<yard.get_stock_count(2005)<<endl; //printing count of the trucks with a same code

    Truck* all_trucks = yard.get_current_stock_list(); //getting list of all trucks with thier brand name and brand code number using appropriate method

    for(int i=0;i<yard.get_total_stock_count();i++){
        cout<<"Truck "<<i+1<<":- Brand Name:- "<<all_trucks[i].get_brand_name()<<", Brand code Number:- "<<all_trucks[i].get_brand_code()<<endl; //printing list of all trucks
    }
    return 0;
}