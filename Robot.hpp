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
        if(abs(xOffset) <= this->getGridWidth() || abs(yOffset) <= this->getGridHeight()){
            
        }
    };
    ~Robot(){

    };
};

#endif