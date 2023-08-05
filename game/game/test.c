#define _CRT_SECURE_NO_WARNINGS 
#include "game.h"
void menu()
{
	printf("***********************\n");
	printf("*****   1. play   *****\n");
	printf("*****   0. exit   *****\n");
	printf("***********************\n");
}

void game()
{
	//数组
	char mine[ROWS][COLS];//存放布置好的雷
	char show[ROWS][COLS];//存放排查出的雷的信息
	//初始化棋盘
	//1. mine数组最开始是全'0'
	//2. show数组最开始是全'*'
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//棋盘打印
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//1. 布置雷
	SetMuine(mine,ROW,COL);
	//DisplayBoard(mine, ROW, COL);
	// 2. 排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		dafault :
			printf("选择错误，请重新选择");
			break;
		}
	} while (input);
	return 0;
}