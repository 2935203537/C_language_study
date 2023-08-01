#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//int main()
//{
//	int flag = 5;
//	if (flag)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int month = 0;
//	scanf("%d", &month);
//	if (month == 12 || month == 1 || month == 2)
//	{
//		printf("冬季\n");
//	}
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//	{
//		printf("yes\n");
//	}
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	switch (num % 3)
//	{
//	case 0:
//	{
//		printf("余数是0");
//		break;
//	}
//	case 1:
//	{
//		printf("余数是1");
//		break;
//	}
//	default:
//	{
//		printf("余数是2");
//		break;
//	}
//	}
//		return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	{
//		printf("星期一\n");
//		break;
//	}
//	case 2:
//	{
//		printf("星期二\n");
//		break;
//	}
//	case 3:
//	{
//		printf("星期三\n");
//		break;
//	}
//	case 4:
//	{
//		printf("星期四\n");
//		break;
//	}
//	case 5:
//	{
//		printf("星期五\n");
//		break;
//	}
//	case 6:
//	{
//		printf("星期六\n");
//		break;
//	}
//	case 7:
//	{
//		printf("星期天\n");
//		break;
//	}
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//	{
//		printf("\n");
//		break;
//	}
//	case 6:
//	case 7:
//	{
//		printf("休息日\n");
//		break;
//	}
//	default:
//	{
//		printf("无法匹配");
//		break;
//	}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d\n", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	while (n)
//	{
//		printf("%d", n % 10);
//		n = n / 10;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 3; i <= 100; i+=3)
//	{
//			sum += i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d\n", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int cnt = 0;
//	do
//	{
//		cnt++;
//		n = n / 10;
//	} while (n);
//	printf("%d", cnt);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for ( i = 1; i <= 10;)
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//		{
//			continue;
//		}
//		printf("%d", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否是素数
//		//使用2~i-1之间的数字去试除i
//		//如果i被整除了，i就不是素数
//		//如果2~i-1之间的没有数字可以整除i，i就是素数
//		int j = 0;
//		int flag = 1;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

int main()
{
	int iq = 0;
	while (scanf("%d", &iq) == 1)
	{
		if (iq >= 140)
		{
			printf("Genius\n");
		}
	}
	return 0;
}