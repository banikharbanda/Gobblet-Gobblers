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
#include "piece.hpp"
#include "observer.hpp"

class Board : public Observer{
private:
    std::vector<std::vector<Cell>> cells;
    std::vector<Cell> makeRow(int size);
    std::string isWin(std::vector<Cell> &row);
    int size;
public:
    Board(int size);
    std::string move(Piece *piece, int cellRow, int cellColumn);
    void notify(Event event);
    int getSize();
    std::vector<std::vector<Cell>> &getCells();
    std::string checkWin();
    
};

#endif /* board_hpp */
