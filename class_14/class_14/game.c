#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������ȫ����Ϊ�ո�
void init_board(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';//��Ϊ�ո�
		}
	}
}



//����ʵ���������е���ʾ
void display_board(char board[ROW][COL], int row, int col)//��ʾ����
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			//�ٴ�ӡһ�е�����
			printf(" %c ", board[i][j]);
			if (j < col - 1);//ָ���ұ߲���ӡ�߿�|
			{
				printf("|"); 
			}
		}
		printf("\n");
		//�ڴ�ӡ�ָ���
		if (i < row - 1)//ָ����ӡ������߿�
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (i < col - 1)//ָ���ұ߲���ӡ�߿�|
				{
					printf("|");
				}
			}
		}
		
		printf("\n");
	}
}



//����ƶ�����
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y = 0;
	while (1)
	{
		printf("����������λ������:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= 3 && y >= 1 && y <= 3)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';//���������*
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��\n");
			}
		}
		printf("����������\n");
	}
	printf("�������:\n");
}



//�����ƶ�����
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("��������:\n");
	int x, y = 0;
	while (1)
	{
		x = rand() % row;//���������%3��0~2����
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';//����������#
			break;
		}
	}
}



//�ж������Ƿ��Ѿ�����
int IsFull(char board[ROW][COL], int row, int col)
{
	int i, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < row; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//�пո�˵������û��
			}
		}
	}
	return 1;//����û��return��˵����������
}



//�ƶ����ж�ʤ�������������ʤ*�ڵ���ʤ#��ƽ��Q�ܼ�������C
char IsWin(char board[ROW][COL], int row, int col)
{//�˺���ֻ��ʵ���������ʤ���ж�
	int i = 0;
	//���Ƿ���ͬ���ж�
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];//�൱�ڷ�����Ӧ*��#
		}
	}
	//���Ƿ���ͬ���ж�
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];//�൱�ڷ�����Ӧ*��#
		}
	}
	//б�Խ��Ƿ���ͬ���ж�
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];//�൱�ڷ�����Ӧ*��#
	}
	//��һ��б�Խ��Ƿ���ͬ���ж�
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
	{
		return board[1][1];//�൱�ڷ�����Ӧ*��#
	}
	if (1 == IsFull(board, ROW, COL))//��Ƕ�����ж������Ƿ�����
	{
		return 'Q';//���˾�ƽ��
	}
	return 'C';//û���ͼ���
}