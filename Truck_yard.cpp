#include "Truck.h"
#include "Truck_yard.h"

#include <string>
#include <iostream>

using namespace std;

Truck_yard::Truck_yard() {
    maximum_capacity = 0;
    current_capacity = 0;
    all_trucks = nullptr;
}

Truck_yard::Truck_yard(int capacity) {
    maximum_capacity = capacity;
    current_capacity = 0;
    all_trucks = new Truck[maximum_capacity];
}

int Truck_yard::get_total_stock_count() { 
    return current_capacity;
}

int Truck_yard::get_stock_count(int code) {
    int count = 0;
    for(int i=0;i<current_capacity;i++){
        if(all_trucks[i].get_brand_code() == code){
            count = i+1;
        }
    }

    return count;
}

Truck* Truck_yard::get_current_stock_list() {
    return all_trucks;
}

bool Truck_yard::addStock(Truck c) {
    if(current_capacity < maximum_capacity){
        all_trucks[current_capacity] = c;
        current_capacity++;
        return true;
    }
    else{
        return false;
    }
}

Truck_yard::~Truck_yard() {
    delete[] all_trucks;
}