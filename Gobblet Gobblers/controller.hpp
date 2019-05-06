//
//  controller.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 05/05/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef controller_hpp
#define controller_hpp

#include "model.hpp"
#include "textDisplay.hpp"
#include <sstream>
#include <iostream>

class Controller {
private:
    Model model;
    TextDisplay &textDisplay;
    Player* changePlayer(Player *curr, Player *p1, Player*p2);
    int size;
public:
    Controller(std::string colour1, std::string colour2, int size);
    void play();
};

#endif /* controller_hpp */
