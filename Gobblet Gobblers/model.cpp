//
//  model.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 05/05/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "model.hpp"


Model::Model(std::string colour1, std::string colour2, int size): board(size), p1(colour1), p2(colour2) {}

Player *Model::getPlayer(int playerNum) {
    if (playerNum == 1) return &p1;
    return &p2;
}

Board *Model::getBoard() {
    return &board;
}
