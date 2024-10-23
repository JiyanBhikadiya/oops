#ifndef HELPER_H
#define HELPER_H

#include "GridItem.hpp"

#include <cmath>

class Helper
{
private:
    /* data */
public:
    Helper(/* args */){

    };
    static double euclideanDistance(std::pair<int, int> item1, std::pair<int, int> item2){
        return sqrt(pow((item2.first-item1.first),2) + pow((item2.second-item1.second),2));
    };
    ~Helper(){

    };
};

#endif