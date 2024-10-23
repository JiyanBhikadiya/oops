#ifndef GAME_ENTITY_H
#define GAME_ENTITY_H

#include <tuple>

using namespace std;

enum GameEntityType {
    ExplosionType,
    MineType,
    NoneType,
    ShipType
};

class GameEntity {

    protected:
        tuple<int, int> position;
        GameEntityType type;

    public:
        GameEntity(int x, int y, char type);
        tuple<int, int> getPos();
        GameEntityType getType();

        void setPos(tuple<int, int> pos);
        void setType(GameEntityType type);
};

GameEntity:: GameEntity(int x, int y, char type) {
    position = make_tuple(x,y);
    switch (type) {
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
    }
}


tuple<int, int> GameEntity:: getPos() {
    return this-> position;
};
GameEntityType GameEntity:: getType() {
    return this->type;
};

void GameEntity:: setPos(tuple<int, int> pos) {
    this->position =pos;
};
void GameEntity:: setType(GameEntityType type) {
    this-> type = type;
};


#endif