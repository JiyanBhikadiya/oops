#include "AirVehicle.h"

AirVehicle::AirVehicle() {
    this->weight = 0;
    this->fuel = 0;
    this->numberOfFlights = 0;
}

AirVehicle::AirVehicle(int w) {
    this->weight = w;
    this->fuel = 0;
    this->numberOfFlights = 0;
}

int AirVehicle::get_weight() {
    return this->weight;
}

void AirVehicle::set_weight(int weight) {
    this->weight = weight;
}

float AirVehicle::get_fuel() {
    return this->fuel;
}

void AirVehicle::set_fuel(float fuel) {
    this->fuel = fuel;
}

int AirVehicle::get_numberOfFlights() {
    return this->numberOfFlights;
}

void AirVehicle::set_numberOfFlights(int numberOfFlights) {
    this->numberOfFlights = numberOfFlights;
}

void AirVehicle::refuel() {
    this->fuel = 100;
}

void AirVehicle::fly(int headwind, int minutes) {
    this->numberOfFlights++;
}
