#define ROW 3//���пɸ���
#define COL 3
//�Զ��峣����ʽ����ʵ��ȫ�����е�һ���Ե���

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


//������������������Ҫ�ֺţ��������Ķ��岻��Ҫ
void init_board(char board[ROW][COL], int row, int col);
void display_board(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
