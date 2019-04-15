//
//  cell.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "cell.hpp"


void Cell::updateDisplay() {
    
}

void Cell::place(Piece *piece) {
    piecesOnCell.push(piece);
    updateDisplay();
}

void Cell::remove() {
    piecesOnCell.pop();
    updateDisplay();
}
