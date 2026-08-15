//
// Created by Admin on 28/03/2026.
//

#ifndef PUZZLE_PLAYER_H
#define PUZZLE_PLAYER_H
#include <string>


class Player {
    private:
    std::string nickName;
    int totalPoints{0};
    public:
    Player(const std::string& nick);
    void roundResult(int score);
    std::string getNickName() const;
    int getTotalPoints() const;
};


#endif //PUZZLE_PLAYER_H