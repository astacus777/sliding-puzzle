//
// Created by Admin on 28/03/2026.
//

#include "Player.h"

Player::Player(const std::string& nick) {
    // Przypisanie nazwy gracza
    nickName = nick;
}

void Player::roundResult(int score) {
    // Dodanie punktow zdobytych w zakonczonej rundzie
    this->totalPoints += score;
}

std::string Player::getNickName() const {
    return this->nickName;
}

int Player::getTotalPoints() const {
    // Zwrocenie lacznej liczby punktow gracza
    return this->totalPoints;
}