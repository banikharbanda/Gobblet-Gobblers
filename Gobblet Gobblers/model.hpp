//
//  model.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 05/05/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef model_hpp
#define model_hpp

#include "board.hpp"
#include "player.hpp"

class Model {
private:
    Board board;
    Player p1;
    Player p2;
    
public:
    Model(std::string colour1, std::string colour2, int size);
    Player *getPlayer(int playerNum);
    Board *getBoard();
};

#endif /* model_hpp */
