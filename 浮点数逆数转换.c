#include<stdio.h>
#include<math.h>
#include<stdlib.h>	
int main()
{
	float a;
	printf("请输入一个100~1000浮点数：");
	scanf_s("%f", &a);
	int b = (int)(a * 10);
	int c = 0;
	int d = 0;
	while (b > 0)
	{
		d = b % 10;
		c = c * 10 + d;
		b = b / 10;
	}
	float e = (float)c / 1000;
	printf("逆序输出为：%.3f\n", e);
	return 0;
}