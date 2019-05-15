//
//  textDisplay.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 29/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef textDisplay_hpp
#define textDisplay_hpp

#include "observer.hpp"
#include "model.hpp"
#include <iostream>

class TextDisplay: public Observer{
private:
    
    TextDisplay();
    
    void displayCell(Cell *cell);
    void displayPlayerInfo();
    Board * board;
    
public:
    void notify(Event event);
    static TextDisplay &getInstance(Model *model);
    void display();
    void displayBoard();
    ~TextDisplay();
    
    
};

#endif /* textDisplay_hpp */
