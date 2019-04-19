//
//  cell.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "cell.hpp"

Cell::Cell() {
    piecesOnCell = {};
}

bool Cell::isEmpty() {
    return piecesOnCell.empty();
}

Piece * Cell::getTop() {
    if (isEmpty()) {
        return nullptr;
    }
    return piecesOnCell.top();
}

void Cell::place(Piece *piece) {
    if (!isEmpty()) {
        Piece *top = getTop();
        if (top->getSize() >= piece->getSize()) {
            std::cerr << "This piece is too small to be placed here" << std::endl;
            exit(1);
        }
    }
    piecesOnCell.push(piece);
    piece->setCell(this);
    notifyObservers(PLACE);
}

void Cell::remove() {
    if (!isEmpty()) {
        getTop()->setCell(nullptr);
        piecesOnCell.pop();
    } else {
        std::cerr << "There are no pieces on this cell to remove!" << std::endl;
        exit(1);
    }
    notifyObservers(REMOVE);
}
