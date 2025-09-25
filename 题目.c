#include <stdio.h>
int m4()
{
	int time1=0, time2=0;
	scanf_s("%d %d", &time1,&time2);
	int time3 = time1 / 100 * 60 + time1 % 100;
	int time4 = time3 + time2;
	printf("%d%02d", time4/60,time4%60);
	return 0;

} 