#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化，即全部设为空格
void init_board(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//设为空格
		}
	}
}



//可以实现任意行列的显示
void display_board(char board[ROW][COL], int row, int col)//显示棋盘
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//①打印一行的数据
			printf(" %c ", board[i][j]);
			if (j < col - 1);//指最右边不打印边框|
			{
				printf("|"); 
			}
		}
		printf("\n");
		//②打印分割行
		if (i < row - 1)//指不打印最下面边框
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (i < col - 1)//指最右边不打印边框|
				{
					printf("|");
				}
			}
		}
		
		printf("\n");
	}
}



//玩家移动函数
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y = 0;
	while (1)
	{
		printf("请输入下棋位置坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//玩家棋子是*
				break;
			}
			else
			{
				printf("该位置已被占用\n");
			}
		}
		printf("请重新输入\n");
	}
	printf("玩家下棋:\n");
}



//电脑移动函数
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋:\n");
	int x, y = 0;
	while (1)
	{
		x = rand() % row;//利用随机数%3得0~2的数
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//电脑棋子是#
			break;
		}
	}
}



//判断棋盘是否已经填满
int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//有空格，说明棋盘没满
			}
		}
	}
	return 1;//遍历没有return，说明棋盘满了
}



//移动后判断胜负函数，①玩家胜*②电脑胜#③平局Q④继续下棋C
char IsWin(char board[ROW][COL], int row, int col)
{//此函数只能实现三子棋的胜负判断
	int i = 0;
	//行是否相同的判断
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//相当于返回相应*或#
		}
	}
	//列是否相同的判断
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];//相当于返回相应*或#
		}
	}
	//斜对角是否相同的判断
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//相当于返回相应*或#
	}
	//另一个斜对角是否相同的判断
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];//相当于返回相应*或#
	}
	if (1 == IsFull(board, ROW, COL))//再嵌函数判断棋盘是否填满
	{
		return 'Q';//满了就平局
	}
	return 'C';//没满就继续
}