//
//  player.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 14/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef player_hpp
#define player_hpp
#include <vector>
#include <string>
#include "piece.hpp"


class Player {
    std::vector<Piece> pieces;
    std::string colour;
    
public:
    Player(std::string colour);
    std::string getColour();
};

#endif /* player_hpp */
