#include <iostream>

#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "GameEntity.h"

int main(){
    Ship ship(5, 5);
    cout<<get<0>(ship.getPos())<<endl;
    // cout<<get<0>(ship.getPos())<<get<1>(ship.getPos())<<endl;

    // Mine mine(10, 10);

    // ship.move(2, 3);
    // Explosion explosion = mine.explode();

    // std::cout << "Ship moved to (" << std::get<0>(ship.getPos()) << ", " << std::get<1>(ship.getPos()) << ")\n";
    // std::cout << "Mine exploded at (" << std::get<0>(explosion.getPos()) << ", " << std::get<1>(explosion.getPos()) << ")\n";

    // explosion.apply(ship);
    return 0;
}