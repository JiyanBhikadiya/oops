#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>
#include "player.h"

using namespace std;

class Wizard : public Player{
    private:
        int mana;
    public:
        Wizard(string name, int health, int damage,int mana);
        Wizard();
        void castSpell(Player* opponent);
        int setMana();
        void setMana(int new_Mana);
};

#endif