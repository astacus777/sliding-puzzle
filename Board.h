#ifndef PUZZLE_BOARD_H
#define PUZZLE_BOARD_H

#include <vector>

/**
 * @brief Klasa reprezentujaca plansze gry sliding puzzle.
 *
 * Przechowuje stan planszy oraz umozliwia wykonywanie ruchow,
 * tasowanie planszy i sprawdzanie, czy ukladanka zostala rozwiazana.
 */
class Board {
private:
    int size{0};
    std::vector<int> matrix;

public:

    /**
     * @brief Tworzy plansze o podanym rozmiarze.
     * @param size Rozmiar planszy.
     */
    Board(int size);

    /**
     * @brief Wykonuje ruch na planszy.
     * @param move Kierunek ruchu: g, d, p lub l.
     * @return true jesli ruch zostal wykonany, false jesli ruch jest niedozwolony.
     */
    bool makeMove(char move);

    /**
     * @brief Wyswietla aktualny stan planszy.
     */
    void displayMatrix() const;

    /**
     * @brief Wyswietla informacje o nieprawidlowym ruchu.
     */
    void displayInfo();

    /**
     * @brief Tasuje elementy planszy.
     */
    void shuffle();

    /**
     * @brief Sprawdza, czy ukladanka zostala rozwiazana.
     * @return true jesli plansza jest ulozona, w przeciwnym razie false.
     */
    bool isSolved() const;

    /**
     * @brief Ustawia plansze testowa bliska rozwiazaniu.
     *
     * Metoda wykorzystywana podczas testowania programu.
     */
    void setTestBoard();
};

#endif // PUZZLE_BOARD_H