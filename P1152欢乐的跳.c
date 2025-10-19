#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
@#
int main()
{
	long a[1000];
	int b[1000];
	long n, i;
	long count = 0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%ld", &a[i]);
	}
	for ( i = 1; i < n; i++)
	{
		count =llabs( a[i] - a[i - 1]);
		if (count>=1 && count<=n-1)
		{
			b[count] = 1;
		}
	}
	int c=1;
	for ( i = 1; i <=n-1; i++)
	{
		if (b[i] == 0)
		{
			c = 0;

			break;
		}
	}
	if (c==1)
	{
		printf("Jolly\n");
	}
	else
	{
		printf("Not jolly\n");
	}	
	return 0;
}
