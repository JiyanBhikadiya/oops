#ifndef WIZARD.H
#define WIZARD.H

#include <iostream>
#include <string>

class Wizard : public Player{
    private:
        int mana;
    public:
        void castSpell(Player* opponent){};
};

#endif