#ifndef GAMEENTITY_h
#define GAMEENTITY_h

using namespace std;
#include <iostream>
#include <string>
#include <tuple>

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
    public:
        GameEntity(int x, int y, char type);
        std::tuple<int, int> getPos();
        GameEntityType getType();
};

#endif