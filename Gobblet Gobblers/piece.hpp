//
//  piece.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef piece_hpp
#define piece_hpp

#include <string>
#include <iostream>

class Player;
class Cell;

class Piece {
    
public:
    enum Size {SMALL, MEDIUM, LARGE};
    
private:
    Player *player;
    Size size;
    Cell *cell;
    
    
public:
    Piece(Player *_player, Size _size);
    Player *getPlayer();
    Cell *getCell();
    void setCell(Cell * _cell);
    Size getSize();
};

#endif /* piece_hpp */
