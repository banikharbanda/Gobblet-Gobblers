//
//  cell.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef cell_hpp
#define cell_hpp

#include "piece.hpp"
#include <stack>
#include <iostream>
#include <string>


class Cell {
private:
    std::stack<Piece *> piecesOnCell;
public:
    void updateDisplay();
    void place(Piece *piece);
    void remove();
  //  Piece getTop(Piece piece);
};

#endif /* cell_hpp */
