//#include<iostream>
//using namespace std;
//int main()
//{
//    int a;
//    cin >> a;
//    int num = 0;
//    while (a / 10 > 0)
//    {
//        num++;
//        a = a / 10;
//    }
//    if (num > 5)
//        cout << "输入数据太大了";
//    else
//        cout << "位数 =" << num;
//}
//
//#include<stdio.h>
//int main()
//{
//	int year;
//	scanf("%d", &year);
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//	{
//		printf("%d是闰年", year);
//	}
//	else { printf("%d不是闰年", year); }
//	return 0;}
//#include<iostream>
//using namespace std;
//int main()
//{
//	int ar[] = { 1,2,3,4,5 ,6,7,8,9,0 };
//	int* p = ar;
//	for (int i = 0; i < 10; i++)
//	{
//		cout << *p << endl;
//		p++;
//	}
//}
#include<stdio.h>
int main()
{
	int a = 1, b = 2, c = 4, d = 3,x;
	if (a < b)
		if (c < d) x = 1;
		else
			if (a < c)
				if (b < d) x = 2;
				else x = 3;
			else x = 4;
	else  x = 5;
	printf("%d", x);
}