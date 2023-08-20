#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//初始化
//
//	int* ptr = NULL;//空指针
//	*ptr = 100;
//
//	return 0;
//}


//

//int main()
//{
//	int a = 10;
//	int* p = &a;
//
//	int* ptr = NULL;
//	if (p != NULL)
//	{
//		//使用p
//	}
//
//	if (ptr != NULL)
//	{
//		*ptr = 100;
//	}
//	return 0;
//}

//&arr[0] - 数组首元素的地址
//arr -- 数组名也表示数组首元素的地址
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[9]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	//在这里继续使用p的话，p就是野指针了
//	p = NULL;
//	return 0;
//}


//返回栈空间地址的问题
test()
{
	//局部变量
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//...
	return arr;
}
#define NDEBUG
#include <assert.h>

//int main()
//{
//	int a = 9;
//	int *p = NULL;
//
//	if (p != NULL)
//	{
//
//	}
//	else
//	{
//
//	}
//	assert(a  ==  10);
//
//	return 0;
//}

//void Swap(int*px, int*py)
//{
//	int z = 0;
//	z = *px;//z = a
//	*px = *py;//a=b
//	*py = z;//b=a
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 0;//临时变量
//
//	//传值调用
//	//传值调用的时候，函数实参传递给形参后，形参是实参的一份临时拷贝
//	//所以对形参的修改不能影响实参
//	Swap(&a, &b);
//	printf("交换后:a=%d b=%d\n", a, b);
//	return 0;
//}

//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int a = 100;
//	int b = 20;
//
//	//传值调用
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//strlen的模拟实现
//健壮性/鲁棒性
// 
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//确保了指针的有效性
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "hello bit";
//	size_t len = my_strlen(arr);
//	printf("%zd\n", len);
//	return 0;
//}

//int main()
//{
//	//数组名是数组首元素的地址
//	//但是有两个例外
//	//1. sizeof(数组名),这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
//	//2. &数组名，这里的数组名表示整个数组， &数组名: 取出的是整个数组的地址
//	//除此以外，遇到的所有的数组名都是数组首地址
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10};
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0]+1);
//
//
//	printf("arr   = %p\n", arr);
//	printf("arr+1 = %p\n", arr+1);
//
//
//	printf("&arr   =%p\n", &arr);
//	printf("&arr+1 =%p\n", &arr+1);
//
//
//	return 0;
//}


//使用指针访问数组

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	//输出
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", *(p + i));
//		//printf("%d ", *(arr + i));
//		//printf("%d ", arr[i]);
//		//printf("%d ", p[i]);
//		//arr[i] == *(arr + i);
//		//*(p+i) == p[i]
//
//		//arr[i] == *(arr+i) == *(i+arr) == i[arr]
//		printf("%d ", i[arr]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p ====== %p\n", p + i, &arr[i]);
//	}
//	return 0;
//}

//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}

//void print1(int arr[])
//{
//	printf("%d\n", sizeof(arr));
//}
//
//void print2(int* arr)
//{
//	printf("%d\n", sizeof(arr));
//}

//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]); //*(arr+i)
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//冒泡排序
//核心思想:两两相邻的元素进行比较

void sort(int arr[], int sz)
{
	//确定冒泡排序的趟数
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序
		int flag = 1;//假设数组是有序的
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//交换
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //不是有序的
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}

void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	//我们需要排序，排为升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	print(arr, sz);
	return 0;
}