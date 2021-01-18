#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("**** 1.play    0.exit  ****\n");
	printf("***************************\n");
}

//游戏算法的实现
void game()
{
	//数组存放走出的棋盘信息
	char board[ROW][COL] = { 0 }; //全部空格
	//初始化棋盘
	InitBoard(board, ROW,COL); 
	//打印棋盘
	DisplayBoard(board,ROW,COL);


}

void test()
{
	
	//至少执行一次
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("三子棋\n");
			game();
			break;
		case 0:
			printf("退出\n");
			break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
}


int main()
{
	//先搭建框架
	test();
	return 0;
}