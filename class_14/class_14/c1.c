#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>

//三子棋游戏（行列可拓展，但胜负算法仅限3*3）
void game()//游戏主体
{
	char board[ROW][COL] = {0};
	init_board(board, ROW, COL);//初始化，即全部设为空格
	display_board(board, ROW, COL);//显示棋盘，可任意行列
	char ret = 'a';
	while (1)
	{
		//玩家下棋
		PlayerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断玩家胜负
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		ComputerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//判断电脑胜负
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}//以下是循环外
	if (ret == '*')
	{
		printf("玩家胜\n");
	}
	else if (ret == '#')
	{
		printf("电脑胜\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()//打印目录
{
	printf("*************************\n");
	printf("**** 1.play   2.exit ****\n");
	printf("*************************\n");
}
void test()//游戏菜单选择判断
{
	int input = 0;
	do
	{
		menu();
		printf("请选择>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n开始游戏\n");
			game();
			break;
		case 0:
			printf("\n游戏退出\n");
			break;
		default:
			printf("\n输入错误，请重新选择\n");
			break;
		}
	}
	while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}