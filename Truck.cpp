#include "Truck.h"

#include <string>
#include <iostream>

using namespace std;

Truck::Truck() {
    brand_name = "";
    brand_code_number = 0;
}

Truck::Truck(int b_code, std::string b_name) {
    brand_name = b_name;
    brand_code_number = b_code;
}

std::string Truck::get_brand_name() { 
    return brand_name;
}

int Truck::get_brand_code() {
    return brand_code_number;
}

Truck::~Truck() {

}