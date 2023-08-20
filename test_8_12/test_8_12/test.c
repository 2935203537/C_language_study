#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//指针数组
//类比:
//整型数组 - 存放整型的数组 int arr[10]
//字符数组 - 存放字符的数组 char ch[5]
//指针数组 - 存放指针的数组

//int main()
//{
//	int a = 10;
//	int* p = &a;//p是一级指针
//	//a是整型变量，占用4个字节的空间，a是有自己的地址，&a拿到的就是a所占4个字节的第一个字节的地址
//	//p是指针变量，占用4/8个字节的空间，p也是有自己的地址，&p就拿到了p的地址
//	int** pp = &p;
//
//	printf("%d\n", **pp);//10
//
//	//pp 也是指针变量，pp是二级指针变量
//	//int*** ppp = &pp;//ppp是三级指针
//	 
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int e = 5;
//
//	int* parr[5] = { &a,&b,&c,&d,&e };
//
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(parr[i]));
//	}
//	return 0;
//}

//模拟二维数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", parr[i][j]);
//			//parr[i] = *(parr+i)
//			//parr[i][j] = *((parr+i)+j)
//		}
//	}
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;//pc就是字符指针变量
//	//字符指针变量是用来存放地址的
//
//	const char* p = "abcdefghi";//不是将abcdefghi\0字符串放到p中,而是将首字符a的地址存储在p中
//	//"abcdefghi" 是一个常量字符串，是不能被修改的
//	//b = 2+3;
//	//表达式都有2个属性:值属性，类型属性
//	//2+3 值是5
//	//2+3 int
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//
//	if (str1 == str2)
//	{
//		printf("str1 and str2 are same\n");
//	}
//	else
//	{
//		printf("str1 and str2 are not same\n");
//	}
//
//	if (str3 == str4)
//	{
//		printf("str3 and str4 are same\n");
//	}
//	else
//	{
//		printf("str3 and str4 are not same\n");
//	}
//
//	return 0;
//}


//int main()
//{
//	int arr[6];
//	int* p = arr;
//
//	int (*ptr)[6] = &arr;//数组的地址
//	//ptr是数组指针
//
//	char* ch[8];
//	char* (*p2)[8] = &ch;//p2是数组指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr;//数组首元素的地址 - int *
//	&arr;//数组的地址     - int (*)[10]
//	int (*p)[10] = &arr;
//	return 0;
//}

//int main()
//{
// 不建议这样写
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//(*p)
//		//(*&arr)
//		//arr
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}

//void test(int arr[3][5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}


//二维数组也是数组
//二维数组的数组名也是数组首元素的地址

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	return 0;
//}


//void test(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		//*(arr+i) == arr[i]
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			printf("%d ", *(*(arr + i) + j));
//			//printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}

//void test(int(*p)[5], int r, int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//*(p+i) == p[i]
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	test(arr, 3, 5);
//	return 0;
//}


//函数指针变量
//数组指针 - 是指针 - 是指向数组的指针 - 是存放数组地址的指针
//函数指针 - 是指针 - 是指向函数的指针 - 是存放函数地址的指针！！

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//数组名 - 数组首元素的地址
//	//&数组名 - 数组的地址
//
//	//对于函数，&函数名和函数名都是函数的地址
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);
//
//	//int* p1 = &Add;
//	//int* p2 = Add;
//
//	int (*pf)(int, int) = &Add;
//	int r = pf(3, 5);
//	//printf("r = %d\n", r);
//
//	//r = Add(3, 6);
//	printf("r = %d\n", r);
//
//	return 0;
//}

//void (*)(); //函数指针类型
//(void (*)()) //强制类型转换
//(int*)0x0012ff40
//Add - 0x0012ff40
//    - 0
int main()
{
	//
	//  调用0地址处的函数，调用的函数，函数是无参，返回类型是void
	//  Add
	return 0;
}