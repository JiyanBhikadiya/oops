#ifndef UTILS_H
#define UTILS_H

using namespace std;
#include <iostream>
#include <math.h>
#include <random>
#include <cmath>
#include <tuple>

class Utils
{
private:
    /* data */
public:
    Utils(/* args */);
    static std::tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
    static double calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2);
    ~Utils();
};

Utils::Utils(/* args */)
{
}

std::tuple<int, int> Utils::generateRandomPos(int gridWidth,int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridWidth;

    return make_pair(x,y);
}

double Utils::calculateDistance(std::tuple<int, int> pos1,std::tuple<int, int> pos2) {
    int x1 = get<0>(pos1);
    int y1 = get<1>(pos1);
    int x2 = get<0>(pos2);
    int y2 = get<1>(pos2);

  return sqrt(pow((x2-x1),2) + pow((y2,y1),2));
}

Utils::~Utils()
{
}


#endif