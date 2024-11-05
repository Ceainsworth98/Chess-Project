//Carissa Ainsworth
//Chess Project Step 3
//11/21/2021

#include <iostream>
#include <string>
#include "Moveclass.h"

using namespace std;

int main()
{
    string board[8][8];
    int userow, usecol; //user imput 
    int K1row, K1col;
    int K2row, K2col;
    int R1row, R1col;
    int R2row, R2col;
    int B1row, B1col;
    int B2row, B2col;
    int TKrow, TKcol;
    int Qrow, Qcol;
    int p1row, p1col, p2row, p2col, p3row, p3col, p4row, p4col, p5row, p5col, p6row, p6col, p7row, p7col, p8row, p8col;

    K1row = 0, K1col = 1;//knight 1
    K2row = 0, K2col = 6;//knight 2
    R1row = 0, R1col = 0;//rook 1
    R2row = 0, R2col = 7;//rook 2
    B1row = 0, B1col = 2;//bishop 1
    B2row = 0, B2col = 5;//bishop 2
    TKrow = 0, TKcol = 4;//the King
    Qrow = 0, Qcol = 3;//Queen
    p1row = 1, p1col = 0, p2row = 1, p2col = 1, p3row = 1, p3col = 2, p4row = 1, p4col = 3, p5row = 1, p5col = 4, p6row = 1, p6col = 5, p7row = 1, p7col = 6, p8row = 1, p8col = 7;//pawns


    Moveclass move1;
    move1.K2_placement(board, K2row, K2col);
    move1.R1_placement(board, R1row, R1col);
    move1.R2_placement(board, R2row, R2col);
    move1.B1_placement(board, B1row, B1col);
    move1.B2_placement(board, B2row, B2col);
    move1.TK_placement(board, TKrow, TKcol);
    move1.Q_placement(board, Qrow, Qcol);
    move1.p1_placement(board, p1row, p1col);
    move1.p2_placement(board, p2row, p2col);
    move1.p3_placement(board, p3row, p3col);
    move1.p4_placement(board, p4row, p4col);
    move1.p5_placement(board, p5row, p5col);
    move1.p6_placement(board, p6row, p6col);
    move1.p7_placement(board, p7row, p7col);
    move1.p8_placement(board, p8row, p8col);
    move1.K1_placement(board, K1row, K1col);

    return 0;
}