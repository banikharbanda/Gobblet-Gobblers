//
//  piece.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "piece.hpp"

Piece::Piece(Player *_player, Size _size) {
    player = _player;
    size = _size;
    cell = nullptr;
}

Player *Piece:: getPlayer() {
    return player;
}

Piece::Size Piece:: getSize() {
    return size;
}

Cell *Piece::getCell() {
    return cell;
}

void Piece::setCell(Cell * _cell) {
    cell = _cell;
}
