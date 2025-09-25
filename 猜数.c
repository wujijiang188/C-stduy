#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int man(void)
{
	int amount=0;
    srand  (time(0));
	int a=rand()%100+1;
	printf("已生成1~100数字，请开始猜吧\n");
	int b;
	do
	{
		printf("请输入您猜的数字\n");
		scanf_s("%d", &b);
		amount++;
		if (b > a)
		{
			printf("您输入的数字偏大\n");

		}
		else if(b<a)
			{
				printf("您输入的数字偏小\n");
			}
		else
		{
			printf("您用了%d次，猜对了", amount);

		}
	} while (b != a);
	return 0;


	
}