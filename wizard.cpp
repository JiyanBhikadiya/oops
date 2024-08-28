#include "wizard.h"
#include "player.h"

#include <iostream>
#include <string>

using namespace std;

Wizard::Wizard() {
    Wizard("",0,0,0);
}

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name,health,damage){
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    attack(opponent,mana);
    cout << name << " casts a spell on " << opponent->getName() << " for " << damage << " damage."<<endl;
}

int Wizard::setMana() { 
    return mana;
}

void Wizard::setMana(int new_Mana) {
    this->mana = new_Mana;
}
