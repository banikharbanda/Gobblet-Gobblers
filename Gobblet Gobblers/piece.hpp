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

enum Colour {orange, blue};
enum Size {small, medium, large};

class Piece {
    Colour colour;
    Size size;
};

#endif /* piece_hpp */
