#ifndef UTILS_H
#define UTILS_H

#include "Effect.h"
#include <math.h>
#include <random>

class Utils : public Effect{
    protected:
    public:
        tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};


#endif