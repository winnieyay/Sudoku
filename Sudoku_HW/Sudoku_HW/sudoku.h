#include<iostream>
#ifndef SUDOKU_H
#define SUDOKU_H

class Sudoku{
  public:
    Sudoku();
    Sudoku(const int init_map[]);
    void setMap(const int set_map[]);
    int getElement(int index);
    void setElement(int index,int value);
    int getFirstZeroIndex();
    bool isCorrect();
    static const int sudokuSize=81;
    void print_map();
    //int YouDonthave(int arr[]);
    bool rowCanUse(int index,int num,Sudoku questionCheck);
    bool columeCanUse(int index,int num,Sudoku questionCheck);
    bool blockCanUse(int index,int num,Sudoku questionCheck);

  private:
    bool checkUnity(int arr[]);
    int map[sudokuSize];
};





#endif // SUDOKU_H
