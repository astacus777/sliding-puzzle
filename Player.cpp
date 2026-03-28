//
// Created by Admin on 28/03/2026.
//

#include "Player.h"

#include <iostream>
#include <ostream>

void Player::setNickName(const std::string& nick) {
    this -> nickName = nick;
};

void Player::roundResult(int score) {
    this -> totalPoints += score;
}