#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("***************************\n");
	printf("**** 1.play    0.exit  ****\n");
	printf("***************************\n");
}

//��Ϸ�㷨��ʵ��
void game()
{
	//�������߳���������Ϣ
	char board[ROW][COL] = { 0 }; //ȫ���ո�
	//��ʼ������
	InitBoard(board, ROW,COL); 
	//��ӡ����
	DisplayBoard(board,ROW,COL);


}

void test()
{
	
	//����ִ��һ��
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			printf("������\n");
			game();
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}


int main()
{
	//�ȴ���
	test();
	return 0;
}