//
// Created by Admin on 28/03/2026.
//

#ifndef PUZZLE_TIMER_H
#define PUZZLE_TIMER_H

#include <chrono>

/**
 * @brief Klasa sluzaca do pomiaru czasu rozgrywki.
 *
 * Przechowuje czas rozpoczecia i zakonczenia pomiaru
 * oraz umozliwia obliczenie czasu gry w sekundach.
 */
class Timer {
public:

    /**
     * @brief Rozpoczyna pomiar czasu.
     */
    void start();

    /**
     * @brief Konczy pomiar czasu.
     */
    void stop();

    /**
     * @brief Pobiera czas trwania rozgrywki.
     * @return Czas pomiedzy rozpoczeciem i zakonczeniem pomiaru w sekundach.
     */
    double getSeconds() const;

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
    std::chrono::time_point<std::chrono::high_resolution_clock> endTime;
};

#endif // PUZZLE_TIMER_H