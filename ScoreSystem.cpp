//
// Created by Admin on 16/08/2026.
//

#include "ScoreSystem.h"


int StandardScore::calculateScore(int size, int gameTime, int numberOfMoves) const {
    int base = size * 1000;
    return base - gameTime - numberOfMoves;
}

int TimeScore::calculateScore(int size, int gameTime, int numberOfMoves) const {
    int base = size * 1000;
    return base - 2 * gameTime - numberOfMoves;
}