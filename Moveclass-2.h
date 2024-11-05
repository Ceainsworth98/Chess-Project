//Carissa Ainsworth
//Chess Project Step 4
//12/9/2021

#ifndef Moveclass_H
#define Moveclass_H
#include <string>


class Moveclass
{
    private:
        static const int ROWS = 8;
        static const int COLS = 8;
        int currentRow;
        int currentCol;
        int row, col, newspot;
        std::string board[8][8];
        
    public:
        Moveclass();//Constructor
        void placement(std::string arr[][COLS], int, int, char);
        void gameboard(std::string [ROWS][COLS]);
        void peice_placement(std::string arr[][COLS]);
        void board_display(std::string[ROWS][COLS],int, int);
        void peice_move();
        void move_rook(int, int);
        void move_knight(int, int);
        void move_bishop(int, int);
        void move_queen(int, int);
        void move_king(int, int);
        void move_pawn(int, int);
};
#endif