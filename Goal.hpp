#ifndef GOAL_H
#define GOAL_H

#include <cmath>
#include "Interactable.hpp"
#include "Robot.hpp"

class Goal : public Interactable
{
private:
public:
    Goal(int width, int height) : Interactable(width-1,height-1,1,1){
    }

    bool interact(Robot* player) override {
        double distance = std::sqrt(std::pow(width - (*player).getCoordinates().first, 2) + std::pow(height - (*player).getCoordinates().second, 2));

        if(distance == 0){
            return true;
        }
        else{
            return false;
        }
    }

    InteractableType getType() override {
        return GOAL;
    }
};

#endif
