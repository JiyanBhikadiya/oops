#ifndef OBSTACLE_H
#define OBSTACLE_H

#include "Interactable.hpp"
#include "Robot.hpp"
#include <cmath>

class Obstacle : public Interactable
{
private:
int x;
    int y;
    int width;
    int height;
    /* data */
public:
    Obstacle(int x, int y, int width, int height):Interactable(x,y,1,1){}

    bool interact(Robot* robot) override {
        // Calculate the Euclidean distance between the robot and the obstacle
        double robotDistance = std::sqrt(std::pow((*robot).getCoordinates().first - x, 2) + std::pow((*robot).getCoordinates().second - y, 2));
        
        if (robotDistance == 0) {
            (*robot).takeHit(); 
            return (*robot).getHealth() <= 0;
        }
        return false;
    }

    InteractableType getType() override {
        return OBSTACLE;
    }
};


#endif