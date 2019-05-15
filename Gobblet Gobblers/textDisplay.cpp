//
//  textDisplay.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 29/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "textDisplay.hpp"

TextDisplay::TextDisplay() {
}

TextDisplay::~TextDisplay() {
}

TextDisplay& TextDisplay::getInstance(Model * model){
    static TextDisplay T;
    T.board = model->getBoard();
    return T;
}

void TextDisplay::notify(Event event){
    displayBoard();
    displayPlayerInfo();
}

void TextDisplay::display() {
    TextDisplay::displayBoard();
    TextDisplay::displayPlayerInfo();
}

void TextDisplay::displayBoard() {
    for(int i = 0; i < board->getSize(); i++) {
        for (int k = 0; k < board->getSize(); k++) {
            std::cout << "-------------";
        }
        std::cout << std::endl;
        for (int k = 0; k < board->getSize(); k++) {
            std::cout << "|           |";
        }
        std::cout << std::endl;
        for (int j = 0; j < board->getSize(); j++) {
            displayCell(&board->getCells()[i][j]);
        }
        std::cout << std::endl;
        for (int k = 0; k < board->getSize(); k++) {
            std::cout << "|           |";
        }
        std::cout << std::endl;
    }
    for (int k = 0; k < board->getSize(); k++) {
        std::cout << "-------------";
    }
    std::cout << std::endl;
}

void TextDisplay::displayCell(Cell *cell) {
    Piece * p = cell->getTop();
    if (p != nullptr) {
    Piece::Size s = p->getSize();
        int id = p->getId();
    std::string colour = p->getColour();
        std::cout << "|    " << colour << s << id <<"     |";
    } else {
        std::cout << "|           |" ;
    }
}

void TextDisplay::displayPlayerInfo() {
    std::cout << "TODO: Display Player Info" << std::endl;
}
