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
		printf("������ʾ��ֻ����λ���Ŷ��\n");
		printf("�����룺");
		scanf("%d", &a);
		if (i < a)
			printf("������˼����´��ˣ�\n");
		else if (i > a)
			printf("������˼�����С�ˣ�\n");
		else
		{
			printf("��ϲ�㣬Ӯ�ˣ�\n");
			s = 0;
			break;
		}
	}
	if(s==1)
	printf("���� %d\n", i);
}