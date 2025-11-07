/*#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    int t=0;
	scanf("%d", &t);
	int a[10000];
    for (int i = 0; i < t; i++)
    {
		scanf("%d", &n);
		int sum = 0;
		sum = n % 2;
		if (sum==0)
		{
			a[i] = n / 2;
		}
		if (sum==1)
		{
			a[i] = (n + 1) / 2;
		}
	}
	for (int j = 0; j < t; j++)
	{
		printf("%d\n", a[j]);
	}

    return 0;
}
*/
#include <stdio.h>
int main() 
{
	char a = {Namhu};
	
	printf("%d", sizeof(a)); 
	return 0;
}