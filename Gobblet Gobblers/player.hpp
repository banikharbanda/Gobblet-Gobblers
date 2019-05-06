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
#include "cell.hpp"
#include <sstream>


class Player {
    std::vector<Piece> pieces;
    std::string sColour;
    
public:
    Player(std::string _colour);
    std::string getColour();
    Piece *getPiece(Piece::Size size, int id);
    std::vector<Piece *> movablePieces();
   // void move(std::string sPiece, std::string sCell);
};

#endif /* player_hpp */
