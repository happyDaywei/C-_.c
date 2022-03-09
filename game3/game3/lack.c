#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
menu()
{
	 printf("***************************************\n");
	 printf("******1 . play       0 .exit      *****\n");
	 printf("***************************************\n");
}
game()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:> ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			playGame();
			break;
		case 0:
			break;
		default:
			printf("选择错误，请重新选择！\n");
		}
	} while (input);
}
int main()
{
	game();
	return 0;
}