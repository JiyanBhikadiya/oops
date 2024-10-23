#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

#include <iostream>
#include <vector>

int main(){
    Utils util;
    const int gridWidth = 100;
    const int gridHeight = 100;
    const int numEntities = 5;

    std::vector<GameEntity> entities;

    // Generate random positions and create entities
    for (int i = 0; i < numEntities; ++i) {
        auto pos = util.generateRandomPos(gridWidth, gridHeight);
        entities.emplace_back(std::get<0>(pos), std::get<1>(pos), ShipType);
    }

    // Calculate distances between the generated entities
    for (size_t i = 0; i < entities.size(); ++i) {
        for (size_t j = i + 1; j < entities.size(); ++j) {
            double distance = util.calculateDistance(entities[i].getPos(), entities[j].getPos());
            std::cout << "Distance between entity " << i << " and entity " << j << ": " << distance << std::endl;
        }
    }
    return 0;
}