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
//		printf("%d ������\n", num);
//	}
//	else
//	{
//		printf("%d ��ż��\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//	if (age >= 18)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("δ����\n");
//	}
//	return 0;
//}


//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if (num == 0)
//	{
//		printf("�����������0\n");
//	}
//	else if (num > 0)
//	{
//		printf("�������������\n");
//	}
//	else
//	{
//		printf("��������Ǹ���\n");
//	}
//	return 0;
//}

int main()
{
	int age = 0;
	scanf("%d", &age);
	if (age >= 18 && age <= 36)
	{
		printf("����\n");
	}
	else
	{
		printf("������\n");
	}
	return 0;
}