#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"game.h"
#include<stdlib.h>
#include<time.h>

//��������Ϸ�����п���չ����ʤ���㷨����3*3��
void game()//��Ϸ����
{
	char board[ROW][COL] = {0};
	init_board(board, ROW, COL);//��ʼ������ȫ����Ϊ�ո�
	display_board(board, ROW, COL);//��ʾ���̣�����������
	char ret = 'a';
	while (1)
	{
		//�������
		PlayerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//�ж����ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		ComputerMove(board, ROW, COL);
		display_board(board, ROW, COL);
		//�жϵ���ʤ��
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}//������ѭ����
	if (ret == '*')
	{
		printf("���ʤ\n");
	}
	else if (ret == '#')
	{
		printf("����ʤ\n");
	}
	else
	{
		printf("ƽ��\n");
	}
}
void menu()//��ӡĿ¼
{
	printf("*************************\n");
	printf("**** 1.play   2.exit ****\n");
	printf("*************************\n");
}
void test()//��Ϸ�˵�ѡ���ж�
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("\n��ʼ��Ϸ\n");
			game();
			break;
		case 0:
			printf("\n��Ϸ�˳�\n");
			break;
		default:
			printf("\n�������������ѡ��\n");
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