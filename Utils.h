#ifndef UTILS_H
#define UTILS_H

using namespace std;
#include <iostream>
#include <math.h>
#include <random>
#include <cmath>

class Utils
{
private:
    /* data */
public:
    Utils(/* args */);
    std::pair<int, int> generateRandomPos(int gridWidth, int gridHeight);
    double calculateDistance(std::pair<int, int> pos1, std::pair<int, int> pos2);
    ~Utils();
};

Utils::Utils(/* args */)
{
}

std::pair<int, int> Utils::generateRandomPos(int gridWidth,int gridHeight) {
    int x = rand() % gridWidth;
    int y = rand() % gridWidth;

    return make_pair(x,y);
}

double Utils::calculateDistance(std::pair<int, int> pos1,std::pair<int, int> pos2) {
    int x1 = pos1.first;
    int y1 = pos1.second;
    int x2 = pos2.first;
    int y2 = pos2.second;

  return sqrt(pow(x2,x1) + pow(y2,y1));
}

Utils::~Utils()
{
}


#endif