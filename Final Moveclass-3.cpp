//Carissa Ainsworth
//Chess Project Step 4
//12/9/2021

#include "Moveclass.h"
#include <iostream>
#include <string>

using namespace std;

Moveclass::Moveclass() {};
void Moveclass::gameboard(string arr[ROWS][COLS])
{

    //Initialize array with empty spaces 
    for (int r = 0; r < ROWS; r++)
    {
        for (int c = 0; c < COLS; c++)
        {
           
             board[r][c] = "[ ]";

        }
    }
}

void Moveclass::placement(string arr[][COLS], int currentRow, int currentCol, char peice)
{
        string square = "[";
        square += peice;
        square += ']';

    arr[currentRow][currentCol] = square;
}

void Moveclass::peice_placement(std::string arr[][COLS])
{
    srand(time(NULL));
    placement(arr, 0, 0, 'R');//Rook
    placement(arr, 0, 1, 'K');//Knight
    placement(arr, 0, 2, 'B');//Bishop
    placement(arr, 0, 3, 'Q');//Queen
    placement(arr, 0, 4, '+');//King
    placement(arr, 0, 5, 'B');//Bishop
    placement(arr, 0, 6, 'K');//Knight
    placement(arr, 0, 7, 'R');//Rook
    placement(arr, 1, 0, 'o');//Pawn
    placement(arr, 1, 1, 'o');//Pawn
    placement(arr, 1, 2, 'o');//Pawn
    placement(arr, 1, 3, 'o');//Pawn
    placement(arr, 1, 4, 'o');//Pawn
    placement(arr, 1, 5, 'o');//Pawn
    placement(arr, 1, 6, 'o');//Pawn
    placement(arr, 1, 7, 'o');//Pawn
}

void Moveclass::board_display(std::string arr[ROWS][COLS], int, int)
{
    gameboard(board);
    peice_placement(board);
    cout << "   A  B  C  D  E  F  G  H \n"; //Col
    for (int r = 0; r < ROWS; r++)
    {
        cout << (r + 1)<<" ";
        for (int c = 0; c < COLS; c++)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
}
void Moveclass::peice_move()
{
    int chooserow, choosecol;
    char col_letter;
    int error = 0;
    cout << endl << endl;
    do
    {
    cout << "Please enter row, col of the peice you would like to move: ";
    cin >> col_letter>>chooserow;
    
    //Assign col_letter to numerical col for board
    if (col_letter == 'A' || col_letter == 'a')
    {
        choosecol = 0;
    }
    else if (col_letter == 'B' || col_letter == 'b')
    {
        choosecol = 1;
    }
    else if (col_letter == 'C' || col_letter == 'c')
    {
        choosecol = 2;
    }
    else if (col_letter == 'D' || col_letter == 'd')
    {
        choosecol = 3;
    }
    else if (col_letter == 'E' || col_letter == 'e')
    {
        choosecol = 4;
    }
    else if (col_letter == 'F' || col_letter == 'f')
    {
        choosecol = 5;
    }
    else if (col_letter == 'G' || col_letter == 'g')
    {
        choosecol = 6;
    }
    else if (col_letter == 'H' || col_letter == 'h')
    {
        choosecol = 7;
    }
    else if (col_letter != ' ')
    {
        cout << "Error! Please enter a letter followed by a number.\n";
        error++;
    }
    else
    {
        //Catch col is within paramaters
        cout << "Error! Please enter a valid letter.\n";
        error++;
    }

    if (chooserow <= 8)
    {
        chooserow--;
        continue;
    }
    else
    {
        //Catch row is within paramaters
        cout << "Error! Please enter a valid number.\n";
        error++;
    }
}while (error != 0);
    
    if (board[chooserow][choosecol] == "[R]")
    {
        move_rook(chooserow, choosecol);
    }
    else if (board[chooserow][choosecol] == "[K]")
    {
        move_knight(chooserow, choosecol);
    }
    else if (board[chooserow][choosecol] == "[B]")
    {
        move_bishop(chooserow, choosecol);
    }
    else if (board[chooserow][choosecol] == "[Q]")
    {
        move_queen(chooserow, choosecol);
    }
    else if (board[chooserow][choosecol] == "[+]")
    {
        move_king(chooserow, choosecol);
    }
    else if (board[chooserow][choosecol] == "[o]")
    {
        move_pawn(chooserow, choosecol);
    }
    else
    {
        cout << "Please make valid selection";
        cout << chooserow<<choosecol;

    }
}

void Moveclass::move_rook(int currentRow, int currentCol)
{
    int row, col;
    cout << "\nFor this position legal moves are:\n";
    
    //to move straight 
    row = currentRow + 1; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[1]";
    }
    //to move straight 
    row = currentRow + 2; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[2]";
    }
    //to move straight 
    row = currentRow + 3; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[3]";
    }
    //to move straight 
    row = currentRow + 4; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[4]";
    }
    //to move straight 
    row = currentRow + 5; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[5]";
    }
    //to move straight 
    row = currentRow + 6; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[6]";
    }
    //to move straight 
    row = currentRow + 7; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[7]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[1]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[2]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 3;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[3]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 4;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[4]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 5;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[5]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 6;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[6]";
    }
    //to move left/right
    row = currentRow; col = currentCol + 7;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[7]";
    }
    //Show the board with all legal moves from the current position
    //Legal moves will be indicated as 'L'
    cout << "   A  B  C  D  E  F  G  H \n"; //Col
    for (int r = 0; r < ROWS; r++)
    {
        cout << (r + 1) << " ";
        for (int c = 0; c < COLS; c++)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
}
void Moveclass::move_knight(int currentRow, int currentCol)
{
    int row, col, newspot_row;
    char newspot_col;
    cout << "\nFor this position legal moves are:\n";

    //to move up
    row = currentRow - 2; col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[1]";
    }

    row = currentRow - 1; col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[2]";
    }

    //to move right
    row = currentRow + 1; col = currentCol + 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[3]";
    }
    row = currentRow + 2; col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or\n";
        board[row][col] = "[4]";
    }

    //to move down 
    row = currentRow + 2; col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[5]";
    }
    row = currentRow + 1; col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[6]";
    }

    //to move left
    row = currentRow - 1; col = currentCol - 2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[7]";
    }
    row = currentRow - 2; col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[8]";
    }

    //Show the board with all legal moves from the current position
    //Legal moves will be indicated as 'L'
    cout << "   A  B  C  D  E  F  G  H \n"; //Col
    for (int r = 0; r < ROWS; r++)
    {
        cout << (r + 1)<<" ";
        for (int c = 0; c < COLS; c++)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
    do{
    cout << "Please pick the following space of where you would like to move: " << endl;
    cin >> newspot_col>>newspot_row;

    board[currentRow][currentCol] = "[K]";
    
   
}
void Moveclass::move_bishop(int currentRow, int currentCol) 
{
    int row = 0, col = 3, newspot;
    cout << "\nFor this position legal moves are:\n";
    
    //diagonal
    row = currentRow +1; col = currentCol +1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[1]";
    }

    //diagonal
    row = currentRow +2; col = currentCol +2;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[2]";
    }
    //diagonal
    row = currentRow + 3; col = currentCol + 3;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[3]";
    }
    //diagonal
    row = currentRow + 4; col = currentCol + 4;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[4]";
    }
    //diagonal
    row = currentRow + 5; col = currentCol + 5;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[5]";
    }

    //Show the board with all legal moves from the current position
    //Legal moves will be indicated as 'L'
    cout << "   A  B  C  D  E  F  G  H \n"; //Col
    for (int r = 0; r < ROWS; r++)
    {
        cout << (r + 1) << " ";
        for (int c = 0; c < COLS; c++)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
}
void Moveclass::move_queen(int currentRow, int currentCol)
    {
        int row, col;
        cout << "\nFor this position legal moves are:\n";

        //to move straight 
        row = currentRow + 1; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[1]";
        }
        //to move straight 
        row = currentRow + 2; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[2]";
        }
        //to move straight 
        row = currentRow + 3; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[3]";
        }
        //to move straight 
        row = currentRow + 4; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[4]";
        }
        //to move straight 
        row = currentRow + 5; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[5]";
        }
        //to move straight 
        row = currentRow + 6; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[6]";
        }
        //to move straight 
        row = currentRow + 7; col = currentCol;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[7]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 1;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[1]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 2;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[2]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 3;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[3]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 4;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[4]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 5;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[5]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 6;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[6]";
        }
        //to move left/right
        row = currentRow; col = currentCol + 7;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[7]";
        }
        //diagonal
        row = currentRow + 1; col = currentCol + 1;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[1]";
        }

        //diagonal
        row = currentRow + 2; col = currentCol + 2;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[2]";
        }
        //diagonal
        row = currentRow + 3; col = currentCol + 3;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[3]";
        }
        //diagonal
        row = currentRow + 4; col = currentCol + 4;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[4]";
        }
        //diagonal
        row = currentRow + 5; col = currentCol + 5;
        if (row >= 0 && row < 8 && col >= 0 && col < 8)
        {
            cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
            board[row][col] = "[5]";
        }

        //Show the board with all legal moves from the current position
        //Legal moves will be indicated as 'L'
        cout << "   A  B  C  D  E  F  G  H \n"; //Col
        for (int r = 0; r < ROWS; r++)
        {
           cout << (r + 1) << " ";
           for (int c = 0; c < COLS; c++)
           {
               cout << board[r][c];
           }
            cout << endl;
        }
    }
void Moveclass::move_king(int currentRow, int currentCol)
{
    int row, col;
    cout << "\nFor this position legal moves are:\n";

    //diagonal
    row = currentRow + 1; col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[1]";
    }
    //diagonal
    row = currentRow -1; col = currentCol -1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[2]";
    }
    //diagonal
    row = currentRow + 1; col = currentCol - 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[3]";
    }
    //diagonal
    row = currentRow - 1; col = currentCol + 1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[4]";
    }
    //foward 
    row = currentRow + 1; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[5]";
    }
    //backwards 
    row = currentRow -1; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[6]";
    }
    //right
    row = currentRow ; col = currentCol+1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[7]";
    }
    //left
    row = currentRow ; col = currentCol-1;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[8]";
    }

    //Show the board with all legal moves from the current position
    //Legal moves will be indicated as 'L'
    cout << "   A  B  C  D  E  F  G  H \n"; //Col
    for (int r = 0; r < ROWS; r++)
    {
        cout << (r + 1) << " ";
        for (int c = 0; c < COLS; c++)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
}
void Moveclass::move_pawn(int currentRow, int currentCol)
{
    int row, col;
    cout << "\nFor this position legal moves are:\n";

    //foward 
    row = currentRow + 1; col = currentCol;
    if (row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[1]";
    }
    //foward first move
    row = currentRow + 2; 
    if (currentRow == 1 && row >= 0 && row < 8 && col >= 0 && col < 8)
    {
        cout << "board[" << row + 1 << "][" << col + 1 << "] or \n";
        board[row][col] = "[2]";
    }


    //Show the board with all legal moves from the current position
    //Legal moves will be indicated as 'L'
    cout << "   A  B  C  D  E  F  G  H \n"; //Col
    for (int r = 0; r < ROWS; r++)
    {
        cout << (r + 1) << " ";
        for (int c = 0; c < COLS; c++)
        {
            cout << board[r][c];
        }
        cout << endl;
    }
}
