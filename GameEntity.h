#ifndef GAMEENTITY_H
#define GAMEENTITY_H

#include <iostream>
#include <tuple>

using namespace std;

enum GameEntityType{
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity
{
protected:
    tuple<int, int> position;
    GameEntityType type;
    /* data */
public:
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    GameEntityType getType();
    void setType(GameEntityType type);
    void setPos(tuple<int, int> pos);
    ~GameEntity();
};

GameEntity::GameEntity(int x, int y, char type) {
    position = make_tuple(x,y);
    switch (type)
    {
    case 'E':
        this->type = ExplosionType;
        break;
    case 'M':
        this->type = MineType;
        break;
    case 'N':
        this->type = NoneType;
        break;
    case 'S':
        this->type = ShipType;
        break;
    default:
        break;
    }
}

std::tuple<int, int> GameEntity::getPos() {
  return position;
}

GameEntityType GameEntity::getType() {
    return type;
}

void GameEntity::setType(GameEntityType type) {
    this->type = type;
}

void GameEntity::setPos(tuple<int, int> pos) {
    this->position = pos;
}

GameEntity::~GameEntity() {}

#endif