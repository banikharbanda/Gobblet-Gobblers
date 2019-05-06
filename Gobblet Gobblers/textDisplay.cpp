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

TextDisplay& TextDisplay::getInstance(){
    static TextDisplay T;
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
    std::cout << "TODO: Display Board" << std::endl;
}

void TextDisplay::displayCell(Cell *cell) {
    std::cout << "TODO: Display Cell" << std::endl;
}

void TextDisplay::displayPlayerInfo() {
    std::cout << "TODO: Display Player Info" << std::endl;
}
