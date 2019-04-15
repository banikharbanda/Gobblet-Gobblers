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

int main(int argc, const char * argv[]) {
    Player p("red");
    std::cout << p.getColour() << std::endl;
    return 0;
}
