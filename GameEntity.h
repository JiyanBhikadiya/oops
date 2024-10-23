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
        GameEntity();
        GameEntity(int x, int y, char type);
        std::tuple<int, int> getPos();
        GameEntityType getType();
};


GameEntity::GameEntity() {
    make_tuple(0,0);
}

GameEntity::GameEntity(int x, int y, char type) {
    cout<<"Hello"<<endl;
    make_tuple(x,y);
    type = type;
}

std::tuple<int, int> GameEntity::getPos() {
    return position;
}

GameEntityType GameEntity::getType() {
    return type;
}


#endif