#include "GameEntity.h"
#include "Effect.h"
#include "Utils.h"

#include <iostream>
#include <vector>

int main(){
    // GameEntity cell(1, 2, 'A');
    // std::cout << "Initial starting position: (" << std::get<0>(cell.getPos()) << ", "
    //             << std::get<1>(cell.getPos()) << ")" << std::endl;
    // std::cout << "Initial starting type: " << cell.getType() << std::endl;
    std::cout << "Initial starting type: " << Utils::calculateDistance(make_tuple(4,2), make_tuple(3,4)) << std::endl;

    // // cell.setPos(3, 4);
    // // cell.setType('B');
    // // std::cout << "Updated Position: (" << std::get<0>(cell.getPos()) << ", "
    // //             << std::get<1>(cell.getPos()) << ")" << std::endl;
    // // std::cout << "Updated Type: " << cell.getType() << std::endl;

    // auto randomPos = Utils::generateRandomPos(10, 10);
    // std::cout << "Random Starting Position: (" << std::get<0>(randomPos) << ", "
    //             << std::get<1>(randomPos) << ")" << std::endl;

    // auto distance =
    //     Utils::calculateDistance(std::make_tuple(0, 0), std::make_tuple(3, 4));
    // std::cout << "Distance between the points (0,0) and (3,4): " << distance << std::endl;
    return 0;
}