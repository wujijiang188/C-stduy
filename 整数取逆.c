#include<stdio.h>//整数取逆
int main(void)
{
	int a;
	int b;
	int c = 0;
	printf("请入数字");
	scanf_s("%d", &a);
	if (a==0)
	{
		printf("0");
	}
	
	else
	{

		while (a > 0)

		{
			b = a % 10;//得出最后一位
		printf("%d", b);
			a /= 10;
			c = c * 10 + b;

		}
	}
	//printf("您的数字逆序为%d", c);
	return 0;
}
