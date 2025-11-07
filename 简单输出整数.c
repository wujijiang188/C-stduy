#include<stdio.h>
int mn()
{
	int a = 1;
	int m;
	scanf_s("%d", &m);
	do {
		printf("%d\n", a);
		a++;
	} while (a <= m);
	return 0;
}