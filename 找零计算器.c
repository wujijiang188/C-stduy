#include<stdio.h>

int main()
{
	int price = 0;
	int change = 0;
	printf("请输入花费金额");
	scanf_s("%d", &price);
	printf("请输入面额（元）");
	scanf_s("%d", &change);
	int core = change - price;
	
	if (price > change)
	{
		printf("错误，应找您%d元，您无法购买\n",core);
	}
	else
	{
		printf("应找您%d元", core
		);
	}


	return 0;




}