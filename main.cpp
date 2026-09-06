#include <iostream>
#include <vector>
#include "Board.h"
#include "Timer.h"
#include "Player.h"
#include "Game.h"

int main() {

    // Utworzenie glownego obiektu sterujacego rozgrywka
    Game game;

    // Konfiguracja i uruchomienie gry
    game.addPlayers();
    game.setNumberOfRounds();
    game.play();

    // Wyswietlenie koncowych wynikow
    game.showResults();

    return 0;
}
