//
// Created by Admin on 08/03/2026.
//
#include "Board.h"
#include <iostream>
#include <numeric>
#include <random>
#include <algorithm>


Board::Board(int size) : size(size), matrix(size * size) {
    // Wypelnienie planszy kolejnymi wartosciami od 0 do n*n-1
    std::iota(matrix.begin(), matrix.end(), 0);
}

bool Board::makeMove(char move) {
    // Wykonanie ruchu kafelka na puste pole
    switch (move) {
        case 'd':
            for (int i = 0; i < size * size; i++) {
                if (matrix[i] == 0) {
                    if (i >= size) {
                        matrix[i] = matrix[i - size];
                        matrix[i - size] = 0;
                        return true;
                    } else {
                        return false;
                    }
                }
            }
            break;

        case 'g':
            for (int i = 0; i < size * size; i++) {
                if (matrix[i] == 0) {
                    if (i < size * size - size) {
                        matrix[i] = matrix[i + size];
                        matrix[i + size] = 0;
                        return true;
                    } else {
                        return false;
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
                        return true;
                    } else {
                        return false;
                    }
                }
            }
            break;

        case 'p':
            for (int i = 0; i < size * size; i++) {
                if (matrix[i] == 0) {
                    if (i % size != 0) {
                        matrix[i] = matrix[i - 1];
                        matrix[i - 1] = 0;
                        return true;
                    } else {
                        return false;
                    }
                }
            }
            break;

        default:
            return false;
    }

    return false;
}

void Board::displayMatrix() const {
    // Wyswietlenie aktualnego stanu planszy
    std::cout << std::endl;

    for (int i = 0; i < size * size; i++) {
        if (matrix[i] == 0) {
            std::cout << " _  ";
        } else {
            if (matrix[i] < 10) {
                std::cout << " "; // dodatkowa spacja dla liczb jednocyfrowych
            }

            std::cout << matrix[i] << "  ";
        }

        if ((i + 1) % size == 0) {
            std::cout << "\n"; // przejscie do kolejnego wiersza planszy
        }
    }

    std::cout << std::endl;
}

void Board::displayInfo() {
    std::cout << "ruch niedozwolony" << std::endl;
}

void Board::shuffle() {
    // Losowanie ruchow w celu wymieszania planszy
    std::string s = "lpdg";

    std::mt19937 gen(std::random_device{}());
    std::uniform_int_distribution<> dist(0, 3);

    // Plansza jest mieszana przez wykonanie 100 losowych prob ruchu
    for (int i = 0; i < 100; i++) {
        int x = dist(gen);
        makeMove(s[x]);
    }
}

bool Board::isSolved() const {
    // Sprawdzenie poprawnej kolejnosci wszystkich kafelkow
    for (int i = 0; i < size * size - 1; i++) {
        if (matrix[i] != i + 1) {
            return false;
        }
    }

    // Puste pole powinno znajdowac sie na koncu planszy
    return matrix[size * size - 1] == 0;
}

void Board::setTestBoard() {
    // Funkcja pomocnicza do testow:
    // ustawia plansze tak, aby do rozwiazania wystarczyl jeden ruch
    for (int i = 0; i < size * size - 1; i++) {
        matrix[i] = i + 1;
    }

    matrix[size * size - 1] = 0;

    std::swap(matrix[size * size - 2], matrix[size * size - 1]);
}