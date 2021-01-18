#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] =' ';
		}
	}
}

//��ӡ����
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for(j=0;j<col;j++)
		{
			//if (j == col - 1)
			//{
			//	printf(" %c ", board[i][j]);
			//	printf("\n");
			//	printf("___");
			//	break;
			//}
			//printf(" %c |", board[i][j]);

			//printf("___|");

			//1.��ӡһ������
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("___");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}