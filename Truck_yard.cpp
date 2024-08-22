#include "Truck.h"
#include "Truck_yard.h"

#include <string>
#include <iostream>

using namespace std;

Truck_yard::Truck_yard() { //constructor
    maximum_capacity = 0;
    current_capacity = 0;
    all_trucks = nullptr; //assigning null pointer to all_trucks
}

Truck_yard::Truck_yard(int capacity) {
    maximum_capacity = capacity;
    current_capacity = 0;
    all_trucks = new Truck[maximum_capacity]; //allocating size to all_trucks
}

int Truck_yard::get_total_stock_count() { 
    return current_capacity; //returning current ccapacity
}

int Truck_yard::get_stock_count(int code) {
    int count = 0;
    for(int i=0;i<current_capacity;i++){
        if(all_trucks[i].get_brand_code() == code){ //checking if condition
            count++; //counting all trucks which have the code passed by the user
        }
    }

    return count;
}

Truck* Truck_yard::get_current_stock_list() {
    return all_trucks;
}

bool Truck_yard::addStock(Truck c) {
    if(current_capacity < maximum_capacity){ //checking condition that wether the current capacity is lesser that the total capacity
        all_trucks[current_capacity] = c; //adding a new truck
        current_capacity++;
        return true;
    }
    else{
        return false;
    }
}

Truck_yard::~Truck_yard() {
    delete[] all_trucks; //free memory
}