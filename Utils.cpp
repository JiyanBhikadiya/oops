#include "Utils.h"

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
