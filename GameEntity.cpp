#include "GameEntity.h"

GameEntity::GameEntity() {}

// GameEntity::GameEntity(int x, int y, char type) {}

std::tuple<int, int> GameEntity::getPos() {
    return position;
}

GameEntityType GameEntity::getType() {
    return type;
}
