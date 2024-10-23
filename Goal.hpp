#ifndef GOAL_H
#define GOAL_H

#include <cmath>
#include "Interactable.hpp"
#include "Robot.hpp"

class Goal : public Interactable
{
private:
    int height,width;
    /* data */
public:
    Goal(int width, int height) : width(width), height(height) {}

    bool interact(Robot* player) override {
        double distance = std::sqrt(std::pow(width - (*player).getCoordinates().first, 2) + std::pow(height - (*player).getCoordinates().second, 2));
        return distance == 0;
    }

    InteractableType getType() override {
        return GOAL;
    }
};

#endif
