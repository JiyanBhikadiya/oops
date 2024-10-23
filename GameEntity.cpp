#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type) {
    x = 0;
    y = 0;
}

std::tuple<int, int> GameEntity::getPos() {
    return position;
}

GameEntityType GameEntity::getType() {
    return type;
}
