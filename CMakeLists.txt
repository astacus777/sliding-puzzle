cmake_minimum_required(VERSION 4.1)
project(puzzle)

set(CMAKE_CXX_STANDARD 20)

add_executable(sliding_puzzle main.cpp
        Board.cpp
        Board.h
        Timer.cpp
        Timer.h)
