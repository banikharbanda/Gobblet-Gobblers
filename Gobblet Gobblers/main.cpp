//
//  main.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 17/02/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include <iostream>
#include "player.hpp"
#include <string>
#include "cell.hpp"

int main(int argc, const char * argv[]) {
    Player p("red");
  //  Cell c;
    Piece pi(&p, Piece::Size::SMALL);
    //c.place(&pi);
    //c.remove();
    std::cout << p.getColour() << std::endl;
    return 0;
}
