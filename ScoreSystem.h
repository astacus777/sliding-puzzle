//
// Created by Admin on 16/08/2026.
//

#ifndef PUZZLE_SCORESYSTEM_H
#define PUZZLE_SCORESYSTEM_H

/**
 * @brief Abstrakcyjna klasa bazowa reprezentujaca system punktacji.
 *
 * Definiuje wspolny interfejs do obliczania punktow.
 * Klasy dziedziczace moga implementowac rozne sposoby
 * obliczania wyniku gracza.
 */
class ScoreSystem {
public:

    /**
     * @brief Oblicza liczbe punktow za pojedyncza rozgrywke.
     * @param size Rozmiar planszy.
     * @param gameTime Czas rozgrywki w sekundach.
     * @param numberOfMoves Liczba wykonanych ruchow.
     * @return Liczba punktow zdobytych przez gracza.
     */
    virtual int calculateScore(int size, int gameTime, int numberOfMoves) const = 0;

    /**
     * @brief Wirtualny destruktor klasy bazowej.
     */
    virtual ~ScoreSystem() = default;
};

/**
 * @brief Standardowy system punktacji.
 *
 * Punkty sa obliczane na podstawie rozmiaru planszy,
 * czasu rozgrywki oraz liczby wykonanych ruchow.
 */
class StandardScore : public ScoreSystem {
public:

    /**
     * @brief Oblicza wynik wedlug standardowego systemu punktacji.
     * @param size Rozmiar planszy.
     * @param gameTime Czas rozgrywki w sekundach.
     * @param numberOfMoves Liczba wykonanych ruchow.
     * @return Liczba zdobytych punktow.
     */
    int calculateScore(int size, int gameTime, int numberOfMoves) const override;
};

/**
 * @brief System punktacji zwracajacy wieksza uwage na czas rozgrywki.
 *
 * W tym systemie czas ma wiekszy wplyw na koncowa liczbe punktow
 * niz w standardowym systemie punktacji.
 */
class TimeScore : public ScoreSystem {
public:

    /**
     * @brief Oblicza wynik wedlug systemu punktacji premiujacego szybkosc.
     * @param size Rozmiar planszy.
     * @param gameTime Czas rozgrywki w sekundach.
     * @param numberOfMoves Liczba wykonanych ruchow.
     * @return Liczba zdobytych punktow.
     */
    int calculateScore(int size, int gameTime, int numberOfMoves) const override;
};

#endif // PUZZLE_SCORESYSTEM_H