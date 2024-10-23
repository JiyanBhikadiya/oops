#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship: public GameEntity {
    public:
        Ship(int x, int y);
        void move(int dx, int dy);
};


Ship:: Ship(int x, int y): GameEntity(x,y,'S') {
    
};


void Ship::move(int dx, int dy) {
    get<0>(position) += dx;
    get<1>(position) += dy;
};


#endif