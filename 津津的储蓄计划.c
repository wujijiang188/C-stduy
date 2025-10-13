#define _CRT_SECURE_NO_WARNINGS
#include<math.h>
#include<stdio.h>
int main()
{
	double m_count = 0;
	int month = 1;
	int spend[12];
	int i=0;
	int sy=0;
	for (i = 0; i <12; i++)
	{	scanf("%d", &spend[i]);
		sy =sy+ 300 - spend[i];
		if (sy < 0)
		{
			printf("-%d\n", i + 1);
			return 0;
		}
		if (sy >= 100)
		{
			m_count = m_count + (sy / 100)*100;
			sy = sy % 100;
		}
		
	}
	m_count = m_count * 1.2 + sy;
	printf("%d\n",(int) m_count);
	return 0;
}