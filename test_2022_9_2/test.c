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
	//	��ʼ��



}

void test()
{
	int input = 0;

	do {

		menu();
		printf("ѡ�� 1 ������Ϸ,ѡ�� 0 �˳���Ϸ\n");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������\n");
		}

	} while (input);
}

//

int main()
{

	test();

	return 0;
}