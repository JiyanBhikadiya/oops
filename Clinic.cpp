#include "Cage.h"
#include "Clinic.h"

#include <string>
#include <iostream>

using namespace std;

Clinic::Clinic() {
    clinic_name = "null";
    max_cages = 0;
    current_cage = 0;
    cages = new Cage[max_cages];
}

Clinic::Clinic(std::string name, int max_size) {
    clinic_name = name;
    max_cages = max_size;
    current_cage = 0;
    cages = new Cage[max_cages];
}

int Clinic::getNumber_of_cages() {
    return current_cage;
}

bool Clinic::has_cage(std::string cage) { 
    for(int i = 0;i<current_cage;i++){
        if(cages[i].getName() == cage){
            return true;
        }
    }
    return false;
}

std::string Clinic::getName() {
    return clinic_name;
}

Cage* Clinic::getCages() {
    return cages;
}

bool Clinic::addCage(Cage new_cage) {
    if(current_cage < max_cages){
        cages[current_cage] = new_cage;
        current_cage++;
        return true;
    }
    else{
        return false;
    }
}

Clinic::~Clinic() {
    delete[] cages;
}