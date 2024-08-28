#ifndef PLAYER.H
#define PLAYER.H

#include <iostream>
#include <string>

class Player{
    protected:
        string name;
        int health;
        int damage;
    public:
        Player(string name, int health,int damage):name(name),health(health),damage(damage){};
        Player(){Player("",0,0);};
        void attack(Player* opponent,int damage){
        };
        void takeDamage(int damage){

        };
};

#endif