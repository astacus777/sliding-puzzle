//
// Created by Admin on 16/08/2026.
//

#include "MainWindow.h"

#include <QPushButton>

MainWindow::MainWindow() {

    setWindowTitle("Sliding Puzzle");
    resize(500, 400);

    auto *button = new QPushButton("Sliding Puzzle", this);
    button->setGeometry(150, 150, 200, 50);
}