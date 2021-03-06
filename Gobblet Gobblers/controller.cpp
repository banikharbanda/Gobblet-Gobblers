//
//  controller.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 05/05/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "controller.hpp"

// TODO ask from input
Controller::Controller(std::string colour1, std::string colour2, int _size): model(colour1, colour2, _size), textDisplay(TextDisplay::getInstance(&model)) {
    size = _size;
}

Player* Controller::changePlayer(Player *curr, Player *p1, Player*p2) {
    if (curr == p1) return p2;
    return p1;
}

void Controller::play() {
    textDisplay.displayBoard();
    Player *p1 = model.getPlayer(1);
    Player *p2 = model.getPlayer(2);
    Player *currPlayer = p1;
    Board *bd = model.getBoard();
    std::string win = "";
    
    while (win == "") {
        std::cout << "It is Player " << currPlayer->getColour() << "'s turn" << std::endl;
        std::string inputStr;
        std::getline(std::cin, inputStr);
        std::istringstream iss(inputStr);
        
        std::string command;
        iss >> command;
        
        if (command == "help") {
            std::cout << "help stuff" << std::endl;
            continue;
        } else if (command == "move") {
            std::string sPiece;
            std::string sCell;
            iss >> sPiece;
            iss >> sCell;
            std::string len = std::to_string(size);
            if (sCell.length() == 2 && sCell[0] <= len[0] && sCell[1] <= len[0] && sCell[0] >= '1' && sCell[1] >= '1') {
                int cellRow = sCell[0] - 49;
                int cellColumn = sCell[1] - 49;
                Piece *p;
                if (sPiece == "s1") {
                    p = currPlayer->getPiece(Piece::Size::SMALL, 1);
                } else if (sPiece == "s2") {
                    p = currPlayer->getPiece(Piece::Size::SMALL, 2);
                } else if (sPiece == "m1") {
                    p = currPlayer->getPiece(Piece::Size::MEDIUM, 1);
                } else if  (sPiece == "m2") {
                    p = currPlayer->getPiece(Piece::Size::MEDIUM, 2);
                } else if  (sPiece == "l1") {
                    p = currPlayer->getPiece(Piece::Size::LARGE, 1);
                } else if  (sPiece == "l2") {
                    p = currPlayer->getPiece(Piece::Size::LARGE, 2);
                } else {
                    std::cerr << "Invalid piece" << std::endl;
                    continue;
                }
                std::string status = bd->move(p, cellRow, cellColumn);
                if (status != "Error") {
                    win = status;
                    textDisplay.display();
                    std::cout << "Size " << p->getSize() << " ID: " << p->getId() << std::endl;
                    currPlayer = changePlayer(currPlayer, p1, p2);
                }
            }
            else {
                std::cerr << "Invalid cell" << std::endl;
            }
            
        } else if (command == "display") {
            textDisplay.display();
        } else {
            std::cerr << "Invalid command" << std::endl;
        }
        
    }
    
    
    std::cout << "Player " << win << " won!" << std::endl;
    
    
    
}


