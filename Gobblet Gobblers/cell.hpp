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

#include "subject.hpp"

class Cell : public Subject {
private:
    std::stack<Piece *> piecesOnCell = {};
    bool isEmpty();
    
public:
    Piece *getTop();
    Cell();
    void place(Piece *piece);
    void remove();
    //CHANGETHIS
    ~Cell() override;
  //  Piece getTop(Piece piece);
};

#endif /* cell_hpp */
