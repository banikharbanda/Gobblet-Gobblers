//
//  player.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "player.hpp"


Player::Player(std::string _colour): colour{_colour} {
    pieces.emplace_back(Piece(this, Piece::Size::SMALL));
    pieces.emplace_back(Piece(this, Piece::Size::SMALL));
    pieces.emplace_back(Piece(this, Piece::Size::MEDIUM));
    pieces.emplace_back(Piece(this, Piece::Size::MEDIUM));
    pieces.emplace_back(Piece(this, Piece::Size::LARGE));
    pieces.emplace_back(Piece(this, Piece::Size::LARGE));
}

std::string Player::getColour() {
    return colour;
}
