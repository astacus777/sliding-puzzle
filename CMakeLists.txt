cmake_minimum_required(VERSION 3.20)
project(puzzle)

set(CMAKE_CXX_STANDARD 20)

add_executable(sliding_puzzle
        main.cpp
        Board.cpp
        Board.h
        Timer.cpp
        Timer.h
        Player.cpp
        Player.h
        Game.cpp
        Game.h
)
