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
#include <vector>
#include <iostream>
#include <string>

#include "subject.hpp"

class Cell : public Subject {
private:
    std::vector<Piece *> piecesOnCell;
    
public:
    Piece *getTop();
    Cell();
    
    bool place(Piece *piece);
    bool remove();
    //CHANGETHIS
    ~Cell() override;
  //  Piece getTop(Piece piece);
};

#endif /* cell_hpp */
