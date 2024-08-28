#include "player.h"

Player::Player() {
    Player("Hello",0,0);
}

Player::Player(string name, int health, int damage) {
    this->name = name;
    this->health = health;
    this->damage = damage;
}

void Player::attack(Player* opponent, int damage) {}

void Player::takeDamage(int damage) {}

string Player::getName() {
    return this->name;
 }

int Player::getHealth() {
    return health;
}

int Player::getDamage() {
    return damage;
}

void Player::setName(string new_name) {
    this->name = new_name;
}

void Player::setHealth(int new_health) {
    this->health = new_health;
}

void Player::setDamage(int new_damage) {
    this->damage = new_damage;
}
