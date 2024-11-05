#pragma once
//Carissa Ainsworth
//Chess Project Step 3
//11/21/2021

#ifndef Moveclass_H
#define Moveclass_H
#include <string>


class Moveclass
{
private:
    static const int ROWS = 8;
    static const int COLS = 8;
public:
    Moveclass();//Constructor
    void K2_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void R1_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void R2_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void B1_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void B2_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void TK_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void Q_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void K1_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p1_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p2_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p3_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p4_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p5_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p6_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p7_placement(std::string arr[][COLS], int currentRow, int currentCol);
    void p8_placement(std::string arr[][COLS], int currentRow, int currentCol);
};

#endif