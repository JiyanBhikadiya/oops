#include "wizard.h"
#include "player.h"

#include <iostream>
#include <string>

using namespace std;

Wizard::Wizard() {
    Wizard("Hello",0,0,0);
}

Wizard::Wizard(string name, int health, int damage, int mana) : Player(name,health,damage){
    // Player(name,health,damage);
    this->mana = mana;
}

void Wizard::castSpell(Player* opponent) {
    cout<<"Hello"<<endl;
}

int Wizard::setMana() { 
    return mana;
}

void Wizard::setMana(int new_Mana) {
    this->mana = new_Mana;
}
