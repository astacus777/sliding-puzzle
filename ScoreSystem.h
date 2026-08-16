//
// Created by Admin on 16/08/2026.
//

#ifndef PUZZLE_SCORESYSTEM_H
#define PUZZLE_SCORESYSTEM_H


class ScoreSystem {
public:
    virtual int calculateScore(int size, int gameTime, int numberOfMoves) const = 0;
    virtual ~ScoreSystem() = default;
};

class StandardScore : public ScoreSystem {
public:
    int calculateScore(int size, int gameTime, int numberOfMoves) const override;
};

class TimeScore : public ScoreSystem {
public:
    int calculateScore(int size, int gameTime, int numberOfMoves) const override;
};


#endif //PUZZLE_SCORESYSTEM_H