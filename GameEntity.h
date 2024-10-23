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
        GameEntity(){
            make_tuple(0,0);
        };
        GameEntity(int x, int y, char type){
            make_tuple(x,y);
            type = type;
        };
        std::tuple<int, int> getPos(){
            return position;
        };
        GameEntityType getType(){
            return type;
        };
};

#endif