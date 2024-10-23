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

Utils::Utils() {}

tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
  int x = rand() % gridWidth;
  int y = rand() % gridHeight;

  return make_tuple(x, y);
}

double Utils::calculateDistance(tuple<int, int> pos1,tuple<int, int> pos2) {
    int x1 = get<0>(pos1);
    int x2 = get<1>(pos1);
    int y1 = get<0>(pos2);
    int y2 = get<1>(pos2);

    return sqrt((x2-x1) * (x2-x1) + (y2-y1) * (y2-y1));
}


#endif