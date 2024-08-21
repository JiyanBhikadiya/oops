#ifndef TRUCK_H
#define TRUCK_H

#include <string>
#include <iostream>

using namespace std;

class Truck{
    private:
        string brand_name;
        int brand_code_number;

    public:
        Truck();
        Truck(int b_code, std::string b_name);
        std::string get_brand_name();
        int get_brand_code();
        ~Truck();
};

#endif