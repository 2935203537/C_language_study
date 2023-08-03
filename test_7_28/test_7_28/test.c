#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h>
#include <math.h>

//二分查找 在一个指定的有序数组中，查找具体的一个数
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	scanf("%d",&k);//7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int find = 0;//假设找不到
//	for (i = 0; i < sz; i++)
//	{
//		if(k == arr[i])
//		{
//			printf("找到了，下标是%d\n", i);
//			find = 1;
//			break;
//		}
//	}
//	if (find == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &k);
//	//查找-二分查找
//	int left = 0;
//	int right = sz - 1;
//	int find = 0;//假设找不到 
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下表是%d\n", mid);
//			find = 1;
//			break;
//		}
//	}
//	if (find == 0)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//int main()
//{
//	INT_MAX;
//	int left = 2147483646;
//	int right = 2147483646;
//	int mid = left + (right - left) / 2;
//	printf("%d\n", mid);
//	return 0;
//}

//int main()
//{
//	double d = 16.0;
//	double r = sqrt(d);
//	printf("%lf\n", r);
//	return 0;
//}


//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	//输入
//	scanf("%d %d", &a, &b);
//	//调用加法函数，完成a和b的相加
//	//求和的结果放在r中
//	int r = Add(a, b);
//	//输出
//	printf("%d\n", r);
//	return 0;
//}

//void test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("hehe\n");
//	if (n == 5)
//	{
//		return 0;
//	}
//	printf("haha\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void test()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("hehe\n");
//	}
//	printf("haha\n");
//}
//
//int main()
//{
//	test();
//	return 0;
//}

//void set_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//}
//
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	set_arr(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//int test()
//{
//	int n = 0;
//	if (n == 5)
//	{
//		return 1;
//	}
//}
//int main()
//{
//	int m = test();
//	printf("%d\n", m);
//	return 0;
//}


//int is_leap_year(int y)
//{
//	if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int get_days_of_month(int y, int m)
//{
//	int days[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int day = days[m];
//	if(is_leap_year(y) && m == 2)
//	{
//		day += 1;
//	}
//	return day;
//}
//
//int main()
//{
//	int y = 0;
//	int m = 0;
//	scanf("%d %d", &y, &m);
//	int d = get_days_of_month(y, m);
//	printf("%d\n", d);
//	return 0;
//}


//void print_arr(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	print_arr(arr, 3, 5);
//	return 0;
//}

int main()
{
	printf("%d", printf("%d", printf("%d", 43)));
	return 0;
}