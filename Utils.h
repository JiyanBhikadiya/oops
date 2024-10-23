#ifndef UTILS_H
#define UTILS_H

#include "Effect.h"
#include <cmath>
#include <random>
#include <cstdlib>

class Utils{
    protected:
    public:
        Utils(){};
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight){
            int x = rand() % gridWidth;
            int y = rand() % gridHeight;

            return make_tuple(x, y);
        };
        static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
            int x1 = get<0>(pos1);
            int y1 = get<1>(pos1);
            int x2 = get<0>(pos2);
            int y2 = get<1>(pos2);

            return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
        };
};

#endif