//
// Created by Admin on 28/03/2026.
//

#include "Timer.h"

void Timer::start() {
    startTime = std::chrono::high_resolution_clock::now();
}

void Timer::stop() {
    endTime = std::chrono::high_resolution_clock::now();
}

double Timer::getSeconds() const {
    return std::chrono::duration<double>(endTime - startTime).count();
}
