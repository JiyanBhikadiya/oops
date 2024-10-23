#include "GameEntity.h"

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
