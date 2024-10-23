#ifndef UTILS_H
#define UTILS_H

#include "Effect.h"
#include <cmath>
#include <random>
#include <cstdlib>

class Utils : public Effect{
    protected:
    public:
        Utils();
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
};


#endif