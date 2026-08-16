//
// Created by Admin on 16/08/2026.
//


#ifndef PUZZLE_GAME_H
#define PUZZLE_GAME_H

#include <vector>
#include "Player.h"
#include "ScoreSystem.h"


class Game {
private:
    std::vector<Player> players;
    int numberOfRounds{0};
    void playSingleGame(Player& player);

public:
    void addPlayers();
    void setNumberOfRounds();
    void play();
    void showResults() const;
};


#endif //PUZZLE_GAME_H