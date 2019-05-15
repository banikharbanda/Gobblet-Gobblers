//
//  piece.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "piece.hpp"

Piece::Piece(std::string _colour, Size _size, int _id) {
    sColour = _colour;
    size = _size;
    id = _id;
    cell = nullptr;
}

std::string Piece:: getColour() {
    return sColour;
}

Piece::Size Piece:: getSize() {
    return size;
}

int Piece::getId() {
    return id;
}

Cell *Piece::getCell() {
    return cell;
}

void Piece::setCell(Cell * _cell) {
    cell = _cell;
}
