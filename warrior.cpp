#include "warrior.h"
#include "player.h"

#include <iostream>
#include <string>

using namespace std;

Warrior::Warrior() {
    Warrior("Hello",0,0,"");
}

Warrior::Warrior(string name, int health, int damage, string weapon) {
    Player(name,health,damage);
    this->weapon = weapon;
}

void Warrior::swingWeapon(Player* opponent) {}

string Warrior::getWeapon() { 
    return weapon;
 }

void Warrior::setWeapon(string new_weapon) {
    this->weapon = new_weapon;
}
