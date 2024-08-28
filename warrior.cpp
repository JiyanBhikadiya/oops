#include "warrior.h"
#include "player.h"

#include <iostream>
#include <string>

using namespace std;

Warrior::Warrior(string name, int health, int damage, string weapon) {
    Player(name,health,damage);
    this->weapon = weapon;
}

Warrior::Warrior() {
    Warrior("",0,0,"");
}

void Warrior::swingWeapon(Player* opponent) {}
