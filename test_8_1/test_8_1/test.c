#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void test()
//{
//	printf("test\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	test();
//	for (i = 0; i < 10; i++) {
//		arr[i] = -1;
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	int i = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}

//void test1(int d[])
//{
//
//}
//
//int main()
//{
//	int data[10] = { 1,3,5,7,9 };
//	test1(data);
//	return 0;
//}

//void test2(int a[3][5])
//{
//
//}
//
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	test2(arr);
//	return 0;
//}

//void test1(int arr[])
//{
//
//}
//void test2(int arr2[3][5])
//{
//
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[3][5] = { {1,2,3},{2,3,4},{6,6,6} };
//	test1(arr);
//	test2(arr2);
//	return 0;
//}

int main()
{
	int cont;
	do {
		int no;
		printf("请输入一个整数:");
		scanf("%d", &no);
		if (no % 2)
		{
			puts("这个整数是奇数");
		}
		else
		{
			puts("这个整数是偶数");
		}
		printf("要重复一次吗？ 【Yes···0/No···9】：");
		scanf("%d", &cont);
	} while (cont == 0);
	return 0;
}