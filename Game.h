//
// Created by Admin on 16/08/2026.
//

#ifndef PUZZLE_GAME_H
#define PUZZLE_GAME_H

#include <vector>
#include "Player.h"
#include "ScoreSystem.h"

/**
 * @brief Klasa zarzadzajaca przebiegiem gry.
 *
 * Odpowiada za dodawanie graczy, ustalanie liczby rund,
 * prowadzenie rozgrywki oraz wyswietlanie wynikow.
 */
class Game {
private:
    std::vector<Player> players;
    int numberOfRounds{0};

    /**
     * @brief Przeprowadza pojedyncza rozgrywke dla podanego gracza.
     * @param player Gracz wykonujacy aktualne podejscie.
     */
    void playSingleGame(Player& player);

public:

    /**
     * @brief Dodaje graczy do rozgrywki.
     */
    void addPlayers();

    /**
     * @brief Pobiera od uzytkownika liczbe rund.
     */
    void setNumberOfRounds();

    /**
     * @brief Przeprowadza wszystkie rundy gry dla wszystkich graczy.
     */
    void play();

    /**
     * @brief Wyswietla wyniki graczy oraz zwyciezce rozgrywki.
     */
    void showResults() const;
};

#endif // PUZZLE_GAME_H