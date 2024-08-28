#include "player.h"

#include <iostream>
#include <string>

using namespace std;

Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

Player::Player() {
    Player("",0,0);
}

void Player::attack(Player* opponent, int damage) {}

void Player::takeDamage(int damage) {}
