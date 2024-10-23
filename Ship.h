#ifndef SHIP_H
#define SHIP_H

#include "GameEntity.h"

class Ship : public GameEntity
{
    public:
        Ship(int x,int y){
            GameEntity(x,y,GameEntityType::ShipType);
        };
        void move(int dx, int dy){
            position = make_tuple(get<0>(position) + dx, get<1>(position) + dy);
        };

};


#endif