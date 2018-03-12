//
// Created by noelk on 3/12/2018.
//
#include <string>
#include <iostream>

#ifndef TICTACTOE_BOARD_H
#define TICTACTOE_BOARD_H

using namespace std;

class Board {
    bool grid[9];
    Board() {
     for (int i = 0; i < 9; i++){
         grid[i] = false;
     }
    }
    string toString(){
        printf("   |   |   ");
        printf(" %d | %d | %d ");
        printf("   |   |   ");
        printf("___________");

    }
};


#endif //TICTACTOE_BOARD_H
