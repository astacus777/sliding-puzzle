//
// Created by Admin on 08/03/2026.
//
#include "Board.h"
#include <iostream>
#include <numeric>
#include <random>
#include <algorithm>


Board::Board(int size) : size(size), matrix(size * size) {
    std::iota(matrix.begin(), matrix.end(), 0);
}

void Board::makeMove(char move) {
    switch (move) {
        case 'd':
            for (int i = 0; i < size * size; i++) {
                if (matrix[i] == 0) {
                    if (i >= size) {
                        matrix[i] = matrix[i - size];
                        matrix[i - size] = 0;
                        break;
                    } else {
                        displayInfo();
                    }
                }
            }
            break;
        case 'g':

            for (int i = 0; i < (size * size); i++) {
                if (matrix[i] == 0) {
                    if (i < size * size - size) {
                        matrix[i] = matrix[i + size];
                        matrix[i + size] = 0;
                        break;
                    } else {
                        displayInfo();
                    }
                }
            }
            break;
        case 'l':
            for (int i = size * size - 1; i >= 0; i--) {
                if (matrix[i] == 0) {
                    if (((i + 1) % size) != 0) {
                        matrix[i] = matrix[i + 1];
                        matrix[i + 1] = 0;
                        break;
                    } else {
                        displayInfo();
                    }
                }
            }
            break;

        case 'p':
            for (int i = 0; i < (size * size); i++) {
                if (matrix[i] == 0) {
                    if (i % size != 0) {
                        matrix[i] = matrix[i - 1];
                        matrix[i - 1] = 0;
                        break;
                    } else {
                        displayInfo();
                    }
                }
            }
            break;
        default:
            std::cout << "zly ruch";
    }
}

void Board::displayMatrix() const {
    std::cout << std::endl;
    for (int i = 0; i < size * size; i++) {
        if (matrix[i] == 0) {
            std::cout << " _  ";
        } else {
            if (matrix[i] < 10)
                std::cout << " "; // dodatkowa spacja dla 1-cyfrowych
                std::cout << matrix[i] << "  "; // symulowanie matrixa
        }

        if ((i + 1) % size == 0)
            std::cout << "\n";
    }
    std::cout << std::endl;
}

void Board::displayInfo() {
    std::cout << "ruch niedozwolony" << std::endl;
}

void Board::shuffle() {
    std::mt19937 generator(std::random_device{}());
    std::shuffle(matrix.begin(), matrix.end(), generator);
}
