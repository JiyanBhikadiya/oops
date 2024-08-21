#ifndef TRUCK_H
#define TRUCK_H

#include "Truck.h"

#include <string>
#include <iostream>

using namespace std;

class Truck_yard{
    private:
        int maximum_capacity,current_capacity;
        

    public:
        Truck_yard();
        Truck_yard(int capacity);
        int get_total_stock_count();
        int get_stock_count(int code);
        // Truck* get_current_stock_list();
        // bool addStock(Truck c);
        ~Truck_yard();
};

#endif