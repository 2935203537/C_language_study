#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include "add.h"

//����������
//����Ҳ��һ�����������
//��������ʹ��
//int is_leap_year(int y);
//
//int main()
//{
//	int y = 0;
//	scanf("%d", &y);
//	//�ж��Ƿ�������
//	if (is_leap_year(y))
//	{
//		printf("%d ������\n", y);
//	}
//	else
//	{
//		printf("%d ��������\n", y);
//	}
//	return 0;
//}
//
////�����Ķ���
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

//extern �����������ⲿ���ŵ�

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

//static ���ξֲ�����

//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d ", a);
//}
////�����ⲿ����
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