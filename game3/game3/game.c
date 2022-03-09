#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void playGame()
{
	int i = 0;
	int a = 0;
	int c = 0;
	int s = 1;
	i = rand() % 100;
	for(c=0;c<5;c++)
	{
		printf("友情提示您只有五次机会哦！\n");
		printf("请输入：");
		scanf("%d", &a);
		if (i < a)
			printf("不好意思，你猜大了！\n");
		else if (i > a)
			printf("不好意思，你猜小了！\n");
		else
		{
			printf("恭喜你，赢了！\n");
			s = 0;
			break;
		}
	}
	if(s==1)
	printf("答案是 %d\n", i);
}