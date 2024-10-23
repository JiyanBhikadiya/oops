#ifndef EFFECT_H
#define EFFECT_H

#include "GameEntity.h"

class Effect
{
private:
    /* data */
public:
    Effect(/* args */);
    virtual void apply(GameEntity& entity) = 0;
    ~Effect();
};

Effect::Effect(/* args */)
{
}

Effect::~Effect()
{
}


#endif