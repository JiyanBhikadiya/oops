#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle{
    private:
        int weight;        // the weight of AirVehicle 
        float fuel;        // fuel percentage, initially 100%
        int numberOfFlights; // initially 0


    public:
        AirVehicle();
        AirVehicle(int w);  // creates an AirVehicle with weight w

        int getWeight();
        void setWeight(int weight);

        float getFuel();
        void setFuel(float fuel);

        int getNumberOfFlights();
        void setNumberOfFlights(int numberOfFlights);

        void refuel();      // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
};

#endif