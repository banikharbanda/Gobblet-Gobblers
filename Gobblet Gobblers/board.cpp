//
//  board.cpp
//  Gobblet Gobblers
//
//  Created by Bani Singh on 18/04/19.
//  Copyright © 2019 Bani Singh. All rights reserved.
//

#include "board.hpp"

std::vector<Cell> Board::makeRow(int size) {
    std::vector<Cell> row;
    for (int i = 0; i < size; i++) {
        row.emplace_back(Cell());
    //  if (row[i].getTop() == nullptr) std::cerr << "bleh" << std::endl;
    }
    return row;
}

Board::Board(int size) {
    for (int i = 0; i < size; i++) {
        cells.emplace_back(makeRow(size));
       // if (cells[i][0].getTop() == nullptr) std::cerr << "bleh" << std::endl;
    }
    /*
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j++) {
            if (cells[i][j].getTop() == nullptr) std::cout << "bleh";
             if (cells[i][j].getTop() != nullptr) std::cout << "meh";
        }
    }
    */
}

bool Board::move(Piece *piece, int cellRow, int cellColumn) {
    Cell *pieceCell = piece->getCell();
    if (pieceCell == nullptr || pieceCell->getTop() == piece) {
        Cell *moveCell = &cells[cellRow][cellColumn];
      //  if (moveCell == nullptr) std::cerr << "moveCell is null" << std::endl;
        Piece *moveCellPiece = moveCell->getTop();
        if (moveCellPiece == nullptr || moveCellPiece->getSize() < piece->getSize()) {
            bool isSuccess = moveCell->place(piece);
            return isSuccess;
        } else {
            std::cerr << "This piece is too small to be placed on this cell" << std::endl;
            return false;
        }
        
    } else {
        std::cerr << "This piece cannot be moved" << std::endl;
        return false;
    }
}

void Board::notify(Event event) {
    
}

int Board::checkWin() {
    //TODO
    return 0;
}
