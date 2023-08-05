#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "add.h"

//函数的声明
//定义也是一种特殊的声明
//先声明后使用
//int is_leap_year(int y);
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	//判断是否是闰年
//	if (is_leap_year(y))
//	{
//		printf("%d 是闰年\n", y);
//	}
//	else
//	{
//		printf("%d 不是闰年\n", y);
//	}
//	return 0;
//}
//
////函数的定义
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


//int main()
//{
//	int a = 10;
//	int b = 20;
//	scanf("%d %d", &a, &b);
//
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//extern 是用来声明外部符号的

//extern int g_val;
//
//void test()
//{
//	printf("2: %d\n", g_val);
//}
//int main()
//{
//	printf("%d\n", g_val);
//	test();
//	return 0;
//}

//static 修饰局部变量

//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
////声明外部符号
//
//extern int g_val;
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		test();
//	}
//	printf("%d\n", g_val);
//	return 0;
//}

extern int Add(int x, int y);

int main()
{
	int a = 10;
	int b = 20;
	int ret = Add(a, b);
	printf("%d\n", ret);

	return 0;
}