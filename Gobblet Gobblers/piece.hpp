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
    std::string sColour;
    Size size;
    Cell *cell;
    int id;
    
    
public:
    Piece(std::string _colour, Size _size, int _id);
    std::string getColour();
    Cell *getCell();
    void setCell(Cell * _cell);
    Size getSize();
    int getId();
};

#endif /* piece_hpp */
