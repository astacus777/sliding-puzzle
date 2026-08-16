//
// Created by Admin on 28/03/2026.
//

#ifndef PUZZLE_PLAYER_H
#define PUZZLE_PLAYER_H

#include <string>

/**
 * @brief Klasa reprezentujaca gracza.
 *
 * Przechowuje nick gracza oraz jego laczna liczbe punktow.
 * Umozliwia dodawanie punktow oraz pobieranie danych gracza.
 */
class Player {
private:
    std::string nickName;
    int totalPoints{0};

public:

    /**
     * @brief Konstruktor tworzy gracza i przypisuje mu nick.
     * @param nick Nick przypisywany graczowi.
     */
    Player(const std::string& nick);

    /**
     * @brief Dodaje punkty zdobyte w rundzie do lacznego wyniku gracza.
     * @param score Liczba punktow zdobytych w rundzie.
     */
    void roundResult(int score);

    /**
     * @brief Pobiera nick gracza.
     * @return Nick gracza.
     */
    std::string getNickName() const;

    /**
     * @brief Pobiera laczny wynik gracza.
     * @return Liczba punktow zdobytych przez gracza.
     */
    int getTotalPoints() const;
};

#endif // PUZZLE_PLAYER_H