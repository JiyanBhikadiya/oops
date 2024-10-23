#ifndef ROBOT_H
#define ROBOT_H

#include "GridItem.hpp"

class Robot : public GridItem
{
protected:
    int health;
    /* data */
public:
    Robot(/* args */){

    };
    Robot(int gridWidth, int gridHeight){
        this->health = 3;
        GridItem(0,0,gridWidth,gridHeight);
    };
    int getHealth(){
        return this->health;
    };
    void takeHit(){
        if(this->health > 0){
            this->health--;
        }
        else{
            return;
        }
    }; 
    bool move(int xOffset, int yOffset){
         if ((xOffset != 0 && yOffset == 0) || (xOffset == 0 && yOffset != 0)) {
            int x = this->position.first + xOffset;
            int y = this->position.second + yOffset;

            if(x >= 0 && x <= width && y >= 0 && y <= height){
                setCoordinates(x,y);
            }
            return true;
        }
        return false;
    
    };
    ~Robot(){

    };
};

#endif