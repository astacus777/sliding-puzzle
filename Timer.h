//
// Created by Admin on 28/03/2026.
//

#ifndef PUZZLE_TIMER_H
#define PUZZLE_TIMER_H

#include <chrono>


class Timer {
public:
    void start();
    void stop();

    double getSeconds() const;

private:
    std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
    std::chrono::time_point<std::chrono::high_resolution_clock> endTime;
};


#endif //PUZZLE_TIMER_H