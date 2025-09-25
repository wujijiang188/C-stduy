# include<stdio.h>
int main(void)
{
	int x;
	int n = 0;
	printf("ÇëÊäÈëÊý×Ö");
	scanf_s("%d", &x);
	n++;
	x /= 10;
	while (x > 0)
	{
		x /= 10;
		n++;
	}
	printf("%d", n);
	return 0;



}