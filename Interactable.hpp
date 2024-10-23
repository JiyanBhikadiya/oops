#ifndef INTERACTABLE_H
#define INTERACTABLE_H

#include "GridItem.hpp"
#include "Robot.hpp"

enum InteractableType{
    GOAL,
    OBSTACLE
};

class Interactable : public GridItem
{
protected:
    static int activeCount;
    /* data */
public:
    Interactable(/* args */){
        height = 0;
        width = 0;
        position = make_pair(0,0);
        activeCount++;
    };
    Interactable(int x, int y, int width, int height){
        position = make_pair(x,y);
        this->width = width;
        this->height = height;
        activeCount++;
    };
    virtual bool interact(Robot* player) = 0;
    virtual InteractableType getType() = 0;
    int getActiveInteractableCount(){
        return activeCount;
    };
    ~Interactable(){
        activeCount--;
    };
};
int Interactable::activeCount = 0;
#endif