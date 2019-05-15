//
//  cell.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "cell.hpp"

Cell::Cell() {}

Cell::~Cell() {
}

Piece * Cell::getTop() {
    if (piecesOnCell.empty()) {
        return nullptr;
    } else {
        return piecesOnCell.back();
    }
}

bool Cell::place(Piece *piece) {
    if (!piecesOnCell.empty()) {
        Piece *top = getTop();
        if (top->getSize() >= piece->getSize()) {
            std::cerr << "This piece is too small to be placed here" << std::endl;
            return false;
        }
    }
    piecesOnCell.push_back(piece);
    piece->setCell(this);
   // notifyObservers(PLACE);
    return true;
}

bool Cell::remove() {
    if (!piecesOnCell.empty()) {
        getTop()->setCell(nullptr);
        piecesOnCell.pop_back();
        return true;
    } else {
        // TODO: Change this to return false
        std::cerr << "There are no pieces on this cell to remove!" << std::endl;
        return false;
    }
    //notifyObservers(REMOVE);
}


