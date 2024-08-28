#ifndef PLAYER_H
#define PLAYER_H

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
        string getName();
        int getHealth();
        int getDamage();
        void setName(string new_name);
        void setHealth(int new_health);
        void setDamage(int new_damage);
};

#endif