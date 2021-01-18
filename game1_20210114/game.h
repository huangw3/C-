#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <time.h>



#define ROW 3
#define COL 3
 
//函数声明
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//输赢状态：玩家赢*，电脑赢#，平局Q，继续C
char IsWin(char board[ROW][COL], int row, int col);
int IsFull(char board[ROW][COL], int row, int col);
