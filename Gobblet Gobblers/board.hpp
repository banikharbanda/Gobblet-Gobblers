//
//  board.hpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 18/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#ifndef board_hpp
#define board_hpp
#include <vector>
#include "cell.hpp"
#include "observer.hpp"

class Board : public Observer{
private:
    std::vector<std::vector<Cell>> cells;
public:
    void notify(Event event);
    
};

#endif /* board_hpp */
