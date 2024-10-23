#ifndef EXPLOSION_H
#define EXPLOSION_H

#include "GameEntity.h"
#include "Effect.h"

class Explosion: public GameEntity, public Effect {

    public:
        Explosion(int x,int y);
        void apply(GameEntity& entity);
};

Explosion:: Explosion(int x,int y): GameEntity(x,y,'E') {
};


void Explosion:: apply(GameEntity& entity) {
    entity.setType(NoneType);
    entity.setPos(make_tuple(-1,-1));
};


#endif