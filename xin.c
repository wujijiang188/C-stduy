#include <stdio.h>
int m22()
{
	int hour1, min1;
	int hour2, min2;
	printf("请先输入时间1，如1 50\n");
	scanf_s("%d %d", &hour1, &min1);
	printf("请先输入时间2");
	scanf_s("%d %d", &hour2, &min2);
	int dif1 = hour1*60 - hour2*60;
	int dif2 = min1 - min2;
	int time1 = dif1/60  ;
	int time2 = dif2;
	printf("时间差为%d时%d分", time1, time2);
	return 0;

}