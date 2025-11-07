//#include<iostream>
//#include<math.h>
//#include<stdio.h>
//#include<time.h>
//#include<string.h>
//using namespace std;
//int main()
//{
//	/*int a;
//	cin >> a;
//	for (int i = 100; i <= a; i++)
//	{
//
//
//		int b = i / 100;
//		int c = (i / 10) % 10;
//		int d = i % 10;
//		if (pow(b, 3) + pow(c, 3) + pow(d, 3) == i)
//		{
//			cout << "yes, is 水仙花数" <<i<<endl;
//		}
//		else {
//			cout << "no, is not 水仙花数" <<i<< endl;
//		}
//	}*/
//	/*for (int i = 1; i < 10; i++)
//	{
//		for(int j = 1; j <= i;j++ )
//		{ printf("%d*%d=%d ", j, i, i * j); }
//		printf("  \n");
//	     
//	}*/
//	//韩信点兵
//	/*int a, b, c;
//	cin >> a >> b >> c;
//	for (int i = 10; i < 100; i++)
//	{
//		if (i % 3 == a && i % 5 == b && i % 7 == c)
//		{
//			cout << i << endl;
//		}
//		else
//			cout << "no answer" << endl;
//	}*/
//	//分数化小数
//	/*int a, b, c;
//	scanf_s("%d %d %d", &a, &b, &c);
//	double d=1.0*a/b;
//	printf("%.*f", c, d);*/
//	//冒泡数列初探
//	int a[10] = { 3,6,4,5,1,2,3,9,5,8 };
//	for (int i = 0; i < 9; i++)
//	{
//		cout << "输出前数组为: " << a[i] << endl;
//	}
//	for (int i = 0; i <10-1; i++)
//	{
//		for (int j = 0; j < 10 - 1 - i; j++)
//		{
//			if (a[j]>a[j+1])
//			{ 
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (int v = 0; v < 10; v++)
//	{
//		cout << "排序后的数列为：" << a[v] << endl;
//	}
//	system("pause");
//	return 0;
//}