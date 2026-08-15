//
// Created by Admin on 28/03/2026.
//

#include "Player.h"

Player::Player(const std::string& nick) {
    nickName = nick;
}

void Player::roundResult(int score) {
    this -> totalPoints += score;
}

std::string Player::getNickName() const {
    return this -> nickName;
}
int Player::getTotalPoints() const {
    return this -> totalPoints;
}