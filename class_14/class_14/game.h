#define ROW 3//行列可更改
#define COL 3
//以定义常量形式，以实现全部行列的一次性调整

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//以下是声明，声明需要分号，但函数的定义不需要
void init_board(char board[ROW][COL], int row, int col);
void display_board(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
