#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("**********************\n");
	printf("******  1.play  ******\n");
	printf("******  0.over  ******\n");
	printf("**********************\n");
}

//	

void game()
{
	//	初始化



}

void test()
{
	int input = 0;

	do {

		menu();
		printf("选择 1 进入游戏,选择 0 退出游戏\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("请重新输入\n");
		}

	} while (input);
}

//

int main()
{

	test();

	return 0;
}