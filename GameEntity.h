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
            position=make_tuple(0,0);
            type = NoneType;
        };
        // GameEntity(int x, int y, char type) : position(std::make_tuple(x, y)), type(type) {}
        GameEntity(int x, int y, GameEntityType type1){
            // make_tuple(x,y);
            this->position = make_tuple(x,y);
            // cout<<get<0>(position)<<endl;
            type = type1;
        };
        std::tuple<int, int> getPos(){
            cout<<get<0>(this->position)<<endl;
            return position;
        };
        GameEntityType getType(){
            return type;
        };
};

#endif