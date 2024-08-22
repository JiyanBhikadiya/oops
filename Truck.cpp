#include "Truck.h"

#include <string>
#include <iostream>

using namespace std;

Truck::Truck() { //constructor
    brand_name = ""; //assining empty string to brand_name
    brand_code_number = 0; //assining 0 to brand_code_number
}

Truck::Truck(int b_code, std::string b_name) {
    brand_name = b_name; //assining b_name passed by the user to brand_name
    brand_code_number = b_code;
}

std::string Truck::get_brand_name() { 
    return brand_name; //returning brand_name
}

int Truck::get_brand_code() {
    return brand_code_number; //returning brand_code_number
}

Truck::~Truck() {

}