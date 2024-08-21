#include "Cage.h"

#include <string>
#include <iostream>

using namespace std;

Cage::Cage() {
    name = "null";
    id = 0;
}

Cage::Cage(std::string newName, int newNumber) {
    name = newName;
    id = newNumber;
}

std::string Cage::getName() { 
    return name;
}

int Cage::getIDnum() {
    return id;
}

Cage::~Cage() {

}
