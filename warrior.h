#ifndef WARRIOR.H
#define WARRIOR.H

#include <iostream>
#include <string>

using namespace std;

class Warrior : public Player{
    private:
        string weapon;
    public:
        Warrior(string name, int health, int damage,string weapon);
        Warrior();
        void swingWeapon(Player* opponent);
};

#endif