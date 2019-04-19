//
//  piece.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef piece_hpp
#define piece_hpp

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
    Size getSize();
};

#endif /* piece_hpp */
