//
// Created by Admin on 16/08/2026.
//
#include <vector>
#include "Player.h"

#ifndef PUZZLE_GAME_H
#define PUZZLE_GAME_H


class Game {
private:
    std::vector<Player> players;
    int numberOfRounds{0};

public:
    void addPlayers();
    void setNumberOfRounds();
    void play();
    int calculateScore(int size, double gameTime, int numberOfMoves);
    void showResults();
};


#endif //PUZZLE_GAME_H