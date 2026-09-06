//
// Created by Admin on 28/03/2026.
//

#include "Timer.h"

void Timer::start() {
    // Zapisanie czasu rozpoczecia rozgrywki
    startTime = std::chrono::high_resolution_clock::now();
}

void Timer::stop() {
    // Zapisanie czasu zakonczenia rozgrywki
    endTime = std::chrono::high_resolution_clock::now();
}

double Timer::getSeconds() const {
    // Obliczenie czasu rozgrywki w sekundach
    return std::chrono::duration<double>(endTime - startTime).count();
}
