#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Warrior : public Player{
    private:
        string weapon;
    public:
        Warrior();
        Warrior(string name, int health, int damage,string weapon);
        void swingWeapon(Player* opponent);
        string getWeapon();
        void setWeapon(string new_weapon);
};

#endif