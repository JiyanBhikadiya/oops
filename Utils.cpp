#include "Utils.h"

Utils::Utils() {}

tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight) {
  int x = rand() % gridWidth;
  int y = rand() % gridHeight;

  return make_tuple(x, y);
}

double Utils::calculateDistance(tuple<int, int> pos1,tuple<int, int> pos2) {
    int x1, y1, x2, y2;
    std::tie(x1, y1) = pos1;
    std::tie(x2, y2) = pos2;
    return std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
}
