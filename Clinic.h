#ifndef CLINIC_H
#define CLINIC_H

#include "Cage.h"

#include <string>
#include <iostream>

using namespace std;

class Clinic{
    private:
        string clinic_name;
        int max_cages;
        int current_cage;
        Cage* cages;

    public:
        Clinic();
        Clinic(std::string name,int max_size);
        int getNumber_of_cages();
        bool has_cage(std::string cage);
        std::string getName();
        Cage* getCages();
        bool addCage(Cage new_cage);
        ~Clinic();
};

#endif