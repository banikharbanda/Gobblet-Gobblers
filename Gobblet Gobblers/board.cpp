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

Board::Board(int _size) {
    for (int i = 0; i < _size; i++) {
        cells.emplace_back(makeRow(_size));
       // if (cells[i][0].getTop() == nullptr) std::cerr << "bleh" << std::endl;
    }
    size = _size;
    /*
    for (int i = 0; i < size; i ++) {
        for (int j = 0; j < size; j++) {
            if (cells[i][j].getTop() == nullptr) std::cout << "bleh";
             if (cells[i][j].getTop() != nullptr) std::cout << "meh";
        }
    }
    */
}


int Board::getSize(){
    return size;
}

std::vector<std::vector<Cell>> & Board::getCells() {
    return cells;
}

std::string Board::move(Piece *piece, int cellRow, int cellColumn) {
    Cell *pieceCell = piece->getCell();
    std::string win = "";
    if (pieceCell == nullptr || pieceCell->getTop() == piece) {
        Cell *moveCell = &cells[cellRow][cellColumn];
        Piece *moveCellPiece = moveCell->getTop();
        if (moveCellPiece == nullptr || moveCellPiece->getSize() < piece->getSize()) {
            bool isRemoved = true;
            if (pieceCell == nullptr) {
                isRemoved = true;
            } else if (pieceCell != nullptr && pieceCell->getTop() == piece) {
                isRemoved = pieceCell->remove();
            } else {
                return "Error";
            }
            win = checkWin();
            bool isPlaced = moveCell->place(piece);
            if (win != "") win = checkWin();
            if (isRemoved && isPlaced) {
                return win;
            } else {
                return "Error";
            }
        } else {
            std::cerr << "This piece is too small to be placed on this cell" << std::endl;
            return "Error";
        }
        
    } else {
        std::cerr << "This piece cannot be moved" << std::endl;
        return "Error";
    }
}

void Board::notify(Event event) {
    
}

std::string Board::isWin(std::vector<Cell> &row) {
    Piece * p1 = row[0].getTop();
    if (p1 != nullptr) {
        for (int i = 1; i < size; i++) {
            Piece *p2 = row[i].getTop();
            if (p2 != nullptr) {
                if (p1->getColour() != p2->getColour()) {
                    return "";
                }
            } else {
                return "";
            }
        }
        return p1->getColour();
    }
    return "";
}

std::string Board::checkWin() {
    // CHECK ROWS
    for (int i = 0; i < size; i++) {
        std::string win = isWin(cells[i]);
        if (win != "") return win;
    }
    // CHECK COLUMNS
    for (int j = 0; j < size; j++) {
        std::vector<Cell> col;
        for (int k = 0; k < size; k++) {
            col.emplace_back(cells[k][j]);
        }
        std::string win = isWin(col);
        if (win != "") return win;
    }
    // CHECK DIAGONAL1
    std::vector<Cell> diag1;
    for (int i = 0; i < size; i ++) {
        diag1.emplace_back(cells[i][i]);
    }
    std::string win = isWin(diag1);
    if (win != "") return win;
    // CHECK DIAGONAL2
    std::vector<Cell> diag2;
    for (int i = 0; i < size; i ++) {
        diag2.emplace_back(cells[i][size - i - 1]);
    }
    win = isWin(diag2);
    if (win != "") return win;
    
    return "";
}
