#ifndef PLAYER.H
#define PLAYER.H

#include <iostream>
#include <string>

using namespace std;

class Player{
    protected:
        string name;
        int health;
        int damage;
    public:
        Player(string name, int health,int damage);
        Player();
        void attack(Player* opponent,int damage);
        void takeDamage(int damage);
};

#endif