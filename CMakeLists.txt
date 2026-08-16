cmake_minimum_required(VERSION 3.20)
project(puzzle)

set(CMAKE_CXX_STANDARD 20)

find_package(Qt6 REQUIRED COMPONENTS Widgets)

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
        ScoreSystem.cpp
        ScoreSystem.h
        MainWindow.cpp
        MainWindow.h
)

target_link_libraries(sliding_puzzle PRIVATE Qt6::Widgets)