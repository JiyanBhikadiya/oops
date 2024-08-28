#ifndef WIZARD.H
#define WIZARD.H

#include <iostream>
#include <string>

using namespace std;

class Wizard : public Player{
    private:
        int mana;
    public:
        Wizard(string name, int health, int damage,int mana);
        Wizard();
        void castSpell(Player* opponent);
};

#endif