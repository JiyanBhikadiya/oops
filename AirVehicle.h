#ifndef AIRVEHICLE_H
#define AIRVEHICLE_H

class AirVehicle{
    protected:
        int weight;        // the weight of AirVehicle 
        float fuel;        // fuel percentage, initially 100%
        int numberOfFlights; // initially 0


    public:
        AirVehicle();
        AirVehicle(int w);  // creates an AirVehicle with weight w

        int get_weight();
        void set_weight(int weight);

        float get_fuel();
        void set_fuel(float fuel);

        int get_numberOfFlights();
        void set_numberOfFlights(int numberOfFlights);

        void refuel();      // Resets fuel back to 100%
        virtual void fly(int headwind, int minutes); // headwind in km/h and minutes (time flying)
};

#endif