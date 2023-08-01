#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//strlen - string length
//sizeof

//int main()
//{
//	size_t len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int len = strlen("c:\test\123.c");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	/*
//	printf("%d\n", 123);
//	*/
//	printf("风\n林\n火\n山\n");
//	printf("喂!\n您好!\n\n再见。\n");
//	return 0;
//}

//int main()
//{
//	int i;
//	printf("请输入一个整数:");
//	scanf("%d", &i);
//	printf("该整数加上10的结果是%d\n", i + 10);
//	printf("该整数减上10的结果是%d\n", i - 10);
//	return 0;
//}

//int main()
//{
//	puts("风");
//	puts("林");
//	puts("火");
//	puts("山");
//	int n1, n2;
//	puts("请输入两个整数。");
//	printf("整数 1:");
//	scanf("%d", &n1);
//	printf("整数 2:");
//	scanf("%d", &n2);
//	printf("它们的乘积是%d\n", n1 * n2);
//	int n3, n4, n5;
//	printf("整数 1:");
//	scanf("%d", &n3);
//	printf("整数 2:");
//	scanf("%d", &n4);
//	printf("整数 3:");
//	scanf("%d", &n5);
//	printf("它们的和是%d", n3 + n4 + n5);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


//int main()
//{
//	int no;
//	printf("请输入一个整数:");
//	scanf("%d", &no);
//	printf("最后一位是%d。\n", no % 10);
//	int na, nb;
//	puts("请输入两个整数。");
//	printf("整数A:");
//	scanf("%d", &na);
//	printf("整数B:");
//	scanf("%d", &nb);
//	printf("A除以B得%d余%d。\n", na / nb, na % nb);
//	return 0;
//}

int main(void)
{
	double vx;
	printf("请输入一个实数:");
	scanf("%lf", &vx);
	printf("你输入的是%f\n", vx);
	return 0;
}