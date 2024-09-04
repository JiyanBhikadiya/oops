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

int AirVehicle::getWeight() {
    return this->weight;
}

void AirVehicle::setWeight(int weight) {
    this->weight = weight;
}

float AirVehicle::getFuel() {
    return this->fuel;
}

void AirVehicle::setFuel(float fuel) {
    this->fuel = fuel;
}

int AirVehicle::getNumberOfFlights() {
    return this->numberOfFlights;
}

void AirVehicle::setNumberOfFlights(int numberOfFlights) {
    this->numberOfFlights = numberOfFlights;
}

void AirVehicle::refuel() {
    this->fuel = 100;
}

void AirVehicle::fly(int headwind, int minutes) {
    this->numberOfFlights++;
}
