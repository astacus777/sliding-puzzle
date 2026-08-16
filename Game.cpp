//
// Created by Admin on 16/08/2026.
//
#include "Game.h"
#include "Board.h"
#include "Timer.h"
#include <iostream>

void Game::addPlayers() {
    char answer{};

    do {
        std::string nick;

        std::cout << "Podaj imie gracza: " << std::endl;
        std::cin >> nick;

        players.emplace_back(nick);

        std::cout << "Czy chcesz dodac nastepnego? (Y/N) " << std::endl;
        std::cin >> answer;

    } while (answer == 'Y' || answer == 'y');
}

void Game::setNumberOfRounds() {
    std::cout << "Podaj ile rund chcecie zagrac: " << std::endl;
    std::cin >> numberOfRounds;
}

void Game::play() {
    for (int i = 0; i < numberOfRounds; i++) {
        std::cout << "Runda: " << i+1 << std::endl;
        for (int j = 0; j < players.size(); j++) {


            std::cout << "TERAZ GRA: " << players[j].getNickName() << std::endl;

            int size{0};
            double gameTime{0};
            int numberOfMoves{0};


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
                } else {
                    numberOfMoves++;
                }

                board.displayMatrix();

                std::cout << "Twoj ruch numer: " << numberOfMoves << std::endl;
            }

            timer.stop();
            gameTime = (int)timer.getSeconds();
            std::cout << "czas podejscia: " << gameTime << " sekund" << std::endl;
            std::cout << "ilosc ruchow: " << numberOfMoves << std::endl;

            int score = calculateScore(size, gameTime, numberOfMoves);
            players[j].roundResult(score);

        }
    }
}

int Game::calculateScore(int size, double gameTime, int numberOfMoves) {
    int base = size * 1000;
    return  base - gameTime - numberOfMoves;
}

void Game::showResults() {
    for (int i = 0; i < players.size(); i++) {
        std::cout << players[i].getNickName() << std::endl;
        std::cout << players[i].getTotalPoints() << std::endl;
    }
}

