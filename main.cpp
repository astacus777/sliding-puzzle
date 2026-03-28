#include <iostream>
#include "Board.h"
#include "Timer.h"

// using namespace std;
//
// void displayMatrix(const vector<int>& matrix, int size);

int main() {
    int size{0};
    double gameTime{0};

    std::cout << "Podaj rozmiar macierzy: " << std::endl;
    std::cin >> size;

    Board board(size);
    Timer timer;

    board.shuffle();
    board.displayMatrix();


    timer.start();

    for (int j = 0; j < 5; j++) {
        char move;
        std::cout << "Twoj ruch (g, d, p, l): ";
        std::cin >> move;
        board.makeMove(move);
        board.displayMatrix();
    }

    timer.stop();
    gameTime = (int)timer.getSeconds();
    std::cout << "czas podejscia: " << gameTime << " sekund" << std::endl;

    return 0;
}
