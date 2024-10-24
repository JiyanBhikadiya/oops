#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>
#include <utility>
using namespace std;

#include "Obstacle.hpp"
#include "Goal.hpp"
#include "Robot.hpp"

enum class GameState { 
    WIN,
    LOSE,
    PLAYING 
};

class Game {
private:
    int width;
    int height;
    GameState state;

    Robot* player;
    Goal* goal;
    std::vector<Obstacle*> obstacles;

    bool isObstacle(int x, int y) {
        for (const auto& obstacle : obstacles) {
            if (obstacle->getCoordinates().first == x && obstacle->getCoordinates().second == y) {
                return true;
            }
        }
        return false;
    }

    void checkGameState() {
        if (player->getCoordinates() == goal->getCoordinates()) {
            state = GameState::WIN;
        }
    }

public:
    Game(int width, int height, std::vector<std::pair<int, int>> obstacleCoordinates)
        : width(width), height(height), state(GameState::PLAYING) {
        for (const auto& coord : obstacleCoordinates) {
            if (coord.first != 0 || coord.second != 0 || (coord.first == width - 1 && coord.second == height - 1)) {
                obstacles.push_back(new Obstacle(coord.first, coord.second, 1, 1));
            }
        }
    }

    bool displayState() {
        switch (state) {
            case GameState::WIN:
                std::cout << "You win!" << std::endl;
                return true;
            case GameState::LOSE:
                std::cout << "You lose :(" << std::endl;
                return true;
            case GameState::PLAYING:
                std::cout << "Game on" << std::endl;
                return false;
        }
        return false;
    }

    void movePlayer(int dx, int dy) {
        if (state != GameState::PLAYING) return;

        int newX = player->getCoordinates().first + dx;
        int newY = player->getCoordinates().second + dy;

        if (newX < 0 || newX >= width || newY < 0 || newY >= height || isObstacle(newX, newY)) {
            return;
        }

        player->setCoordinates(newX,newY);
        checkGameState();
    }

    void printGrid() {
        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                if (player->getCoordinates() == std::make_pair(x, y)) {
                    std::cout << 'P';
                } else if (goal->getCoordinates() == std::make_pair(x, y)) {
                    std::cout << 'G';
                } else if (isObstacle(x, y)) {
                    std::cout << 'O';
                } else {
                    cout << '_';
                }
            }
            std::cout << std::endl;
        }
    }
};


#endif