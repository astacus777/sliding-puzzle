#include <iostream>
#include <vector>
#include "Board.h"
#include "Timer.h"
#include "Player.h"
#include "Game.h"

int main() {

    Game game;

    game.addPlayers();
    game.setNumberOfRounds();
    game.play();
    game.showResults();

    return 0;
}
