//
//  piece.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef piece_hpp
#define piece_hpp

#include <stdio.h>
#include "player.hpp"

class Piece {
    
    enum Size {small, medium, large};
    
private:
    Player player;
    Size size;
    
public:
    Piece(Player player, Size size): player {player}, size {size} {}
    Player getPlayer();
    Size getSize();
};

#endif /* piece_hpp */
