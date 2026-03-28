//
// Created by Admin on 08/03/2026.
//

#ifndef PUZZLE_BOARD_H
#define PUZZLE_BOARD_H

#include <vector>


class Board {
private:
    // zmienne
    int size{0};
    std::vector<int> matrix;

public:
    // konstruktor
    Board(int size);

    void makeMove(char move);
    void displayMatrix() const;
    void displayInfo();
    void shuffle();
};


#endif //PUZZLE_BOARD_H
