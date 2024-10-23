#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType{
    GOAL,
    OBSTACLE
};

class Interactable
{
protected:
    static int activeCount;
    /* data */
public:
    Interactable(/* args */){

    };
    Interactable(int x, int y, int width, int height){

    };
    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() = 0;
    int getActiveInteractableCount(){
        return activeCount;
    };
    ~Interactable(){

    };
};
int GridItem::activeCount = 0;
#endif