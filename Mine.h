#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity
{
    public:
        Mine(int x,int y){
            GameEntity(x,y,GameEntityType::MineType);
        };

        Explosion explode(){
            GameEntityType::NoneType;
            return Explosion(get<0>(position),get<1>(position));
        }
};

#endif