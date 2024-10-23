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
            pair<int,int> newPos = make_pair(position.first + xOffset,position.second + yOffset);

            // Check if the new position is within bounds
            if (newPos.first >= 0 && newPos.first < width && newPos.second >= 0 && newPos.second < height) {
                position = newPos;
                return true;
            }
        }
        return false;
    
    };
    ~Robot(){

    };
};

#endif