#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int man()
{
	int a=0;
	printf("请输入一个整数：");
	scanf_s("%d", &a);
	int b=1;
	int c=0;
	if (a <= 2)
	{
		if (a ==1) { printf("1是既不是质数也不是合数\n"); }
		else
		{
			printf("%d为质数",a);
		}
	}
	else {
		for (b = 2; b < a; b++)
		{
			if (a % b == 0) {
				c = 1;
				break;
			}
			else
				c = 0;
		}
		if (c == 0)
			printf("%d是质数\n", a);
		else
			printf("%d是合数\n", a);
	}
	return 0;
}
	
