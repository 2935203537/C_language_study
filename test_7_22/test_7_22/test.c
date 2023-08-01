#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//
//int main()
//{
//	char ch = 0;
//	scanf(" %c", &ch);
//	printf("%c", ch);
//	printf("xxxx\n");
//	return 0;
//}

//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%d%*c%d%*c%d",&year,&month,&day);
//	printf("%d %d %d", year, month, day);
//	return 0;
//}

//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num % 2 == 1)
//	{
//		printf("%d 是奇数\n", num);
//	}
//	else
//	{
//		printf("%d 是偶数\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("成年了\n");
//	}
//	else
//	{
//		printf("未成年\n");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("输入的数字是0\n");
//	}
//	else if (num > 0)
//	{
//		printf("输入的数是正数\n");
//	}
//	else
//	{
//		printf("输入的数是负数\n");
//	}
//	return 0;
//}

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18 && age <= 36)
	{
		printf("青年\n");
	}
	else
	{
		printf("非青年\n");
	}
	return 0;
}