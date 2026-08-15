#include <iostream>
#include "Board.h"
#include "Timer.h"



int main() {

    int size{0};
    double gameTime{0};

    while (size < 3) {
        std::cout << "Podaj rozmiar macierzy (minimum 3): ";
        std::cin >> size;

        if (size < 3) {
            std::cout << "Minimalny rozmiar planszy to 3x3." << std::endl;
        }
    }

    Board board(size);
    Timer timer;

    //board.shuffle();
    board.setTestBoard();
    board.displayMatrix();



    timer.start();

    while (!board.isSolved()) {
        char move;

        std::cout << "Twoj ruch (g, d, p, l): ";
        std::cin >> move;

        if (move != 'g' && move != 'd' && move != 'p' && move != 'l') {
            std::cout << "Nieprawidlowa komenda. Uzyj g, d, p lub l." << std::endl;
            continue;
        }

        if (!board.makeMove(move)) {
            std::cout << "Niedozwolony ruch." << std::endl;
        }

        board.displayMatrix();
    }

    timer.stop();
    gameTime = (int)timer.getSeconds();
    std::cout << "czas podejscia: " << gameTime << " sekund" << std::endl;

    return 0;
}
