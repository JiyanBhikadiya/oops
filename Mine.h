#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine: public GameEntity {
    public:
        Mine(int x,int y);
        Explosion explode();
};


Mine:: Mine(int x,int y): GameEntity(x,y,'M') {
};


Explosion Mine::explode(){ 
    Explosion explosion(get<0>(position),get<1>(position));
    explosion.apply(*this);
    return explosion;
};

#endif