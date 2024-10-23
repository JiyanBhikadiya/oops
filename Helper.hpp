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
        return sqrt(pow((item1.first-item2.first),2) - pow((item1.second-item2.second),2));
    };
    ~Helper(){

    };
};

#endif