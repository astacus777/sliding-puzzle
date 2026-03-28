//
// Created by Admin on 28/03/2026.
//

#ifndef PUZZLE_PLAYER_H
#define PUZZLE_PLAYER_H
#include <string>


class Player {
    private:
    std::string nickName;
    int totalPoints;
    public:
    void setNickName(const std::string& nickName);
    void roundResult(int score);
};


#endif //PUZZLE_PLAYER_H