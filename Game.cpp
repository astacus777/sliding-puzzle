//
// Created by Admin on 16/08/2026.
//
#include "Game.h"
#include "Board.h"
#include "Timer.h"
#include <iostream>
#include <limits>

void Game::addPlayers() {
    char answer{};

    do {
        std::string nick;

        std::cout << "Podaj imie gracza: " << std::endl;
        std::getline(std::cin >> std::ws, nick);

        players.emplace_back(nick);

        std::cout << "Czy chcesz dodac nastepnego? (Y/N) " << std::endl;
        std::cin >> answer;

    } while (answer == 'Y' || answer == 'y');
}

void Game::setNumberOfRounds() {
    while (true) {
        std::cout << "Podaj ile rund chcecie zagrac: ";

        if (std::cin >> numberOfRounds && numberOfRounds > 0) {
            break;
        }

        std::cout << "Podaj dodatnia liczbe calkowita." << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

void Game::play() {
    for (int i = 0; i < numberOfRounds; i++) {
        std::cout << "Runda: " << i+1 << std::endl;
        for (int j = 0; j < players.size(); j++) {


            std::cout << "TERAZ GRA: " << players[j].getNickName() << std::endl;
            playSingleGame(players[j]);


        }
    }
}

void Game::playSingleGame(Player& player) {
    int size{0};
    int gameTime{0};
    int numberOfMoves{0};


    while (true) {
        std::cout << "Podaj rozmiar macierzy (minimum 3): ";

        if (std::cin >> size && size >= 3) {
            break;
        }

        std::cout << "Podaj liczbe calkowita minimum 3." << std::endl;

        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
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
    gameTime = static_cast<int>(timer.getSeconds());
    std::cout << "czas podejscia: " << gameTime << " sekund" << std::endl;
    std::cout << "ilosc ruchow: " << numberOfMoves << std::endl;

    int score = calculateScore(size, gameTime, numberOfMoves);
    player.roundResult(score);
}

int Game::calculateScore(int size, int gameTime, int numberOfMoves) {
    int base = size * 1000;
    return  base - gameTime - numberOfMoves;
}

void Game::showResults() const {
    for (int i = 0; i < players.size(); i++) {
        std::cout << players[i].getNickName() << std::endl;
        std::cout << players[i].getTotalPoints() << std::endl;
    }
}

