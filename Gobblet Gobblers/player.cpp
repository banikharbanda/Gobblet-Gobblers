//
//  player.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "player.hpp"


Player::Player(std::string _colour): sColour{_colour} {
    pieces.emplace_back(Piece(_colour, Piece::Size::SMALL, 1));
    pieces.emplace_back(Piece(_colour, Piece::Size::SMALL, 2));
    pieces.emplace_back(Piece(_colour, Piece::Size::MEDIUM, 1));
    pieces.emplace_back(Piece(_colour, Piece::Size::MEDIUM, 2));
    pieces.emplace_back(Piece(_colour, Piece::Size::LARGE, 1));
    pieces.emplace_back(Piece(_colour, Piece::Size::LARGE, 2));
}

Piece * Player::getPiece(Piece::Size size, int id) {
    return &pieces[size + id - 1];
}

std::string Player::getColour() {
    return sColour;
}

std::vector<Piece *> Player::movablePieces() {
    std::vector<Piece *> mPieces;
    for (int i = 0; i < pieces.size(); i++) {
        Piece *p = &pieces[i];
        Cell *pieceCell = p->getCell();
        if (pieceCell == nullptr) {
            mPieces.emplace_back(p);
        } else {
            Piece *pieceCellTop = pieceCell->getTop();
            if (pieceCellTop == p) {
                mPieces.emplace_back(p);
            }
        }
    }
    return mPieces;
}

//void move(std::string sPiece, std::string sCell) {
//}
