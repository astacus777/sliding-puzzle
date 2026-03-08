#include <iostream>
#include "Board.h"

// using namespace std;
//
// void displayMatrix(const vector<int>& matrix, int size);

int main() {
    int size{0};
    std::cout << "Podaj rozmiar macierzy: " << std::endl;
    std::cin >> size;

    Board board(size);
    board.shuffle();
    board.displayMatrix();

    for (int j = 0; j < 100; j++) {
        char move;
        std::cout << "Twoj ruch (g, d, p, l): ";
        std::cin >> move;
        board.makeMove(move);
        board.displayMatrix();
    }

    return 0;
}
