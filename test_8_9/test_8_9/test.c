#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//
//	//char ch = 'w';
//	//char* pc = &ch;
//
//	//printf("%d\n", sizeof(p));
//	//printf("%d\n", sizeof(pc));
//
//	//指针变量是为了存放地址的
//	//那指针变量的大小是取决于存放一个地址需要多大的空间的！
//	//32位的机器上，有32根地址线，地址线上传输过来的电信号
//	//转换成数字信号后
//	//的32个0/1组成的二进制序列就是地址
//	//地址都是32个0/1组成的二进制序列的话，那么存放这个地址需要的空间的大小就是4个字节
//	//所以指针变量的大小都是4个字节！
//
//	//X64环境，64位的环境
//	//64个地址线的，地址就是64个0/1组成的二进制序列,要存放这样的地址，就需要8个字节
//	//所以指针变量大小就是8个字节
//	printf("%zd\n", sizeof(char*));
//	printf("%zd\n", sizeof(short*));
//	printf("%zd\n", sizeof(int*));
//	printf("%zd\n", sizeof(long*));
//	printf("%zd\n", sizeof(float*));
//	printf("%zd\n", sizeof(double*));
//
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	int* p = &n;
//	*p = 0;
//	return 0;
//}

//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}

//1.指针类型是有意义的
//2.指针类型决定了，指针进行+1/-1操作的时候,一次跳过几个字节(指针的步长)
//+n/-n  跳过的是n个指向值

//指针类型的这些特点，怎么使用呢？
//数组:
//1 2 3 4 5 6 7 8 9 10
//1.数组下标的方式访问
//2.指针方式访问

//int main()
//{
//	int n = 0x11223344;
//	int* p = &n;
//	char* pc = &n;
//
//	printf("p   = %p\n", p);
//	printf("p+1 = %p\n", p + 1);
//
//	printf("pc  = %p\n", pc);
//	printf("pc+1= %p\n", pc + 1);
//
//	return 0;
//}

//int main()
//{
//	//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	////            0 1 2 ...
//	//// 指针方式访问
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = &arr[0];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p+i));
//	//}
//
//	//下标的方式
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//const 修饰变量，使得这个变量不能被修改
//	//const 修饰指针
//	//1. const放在*的左边
//	//   限制的是指针指向的内容，意思是不能通过指针来修改指针指向的内容，但是指针变量本身是可以修改的
//	//
//	//2. const放在*的右边
//	//   限制的是指针变量本身，意思是不能修改指针变量的指向，但是可以修改指针指向的内容
//	//
//	int m = 100;
//	const int n = 10;
//
//	int* p = &n;
//	 
//	*p = 0;
//	p = &m;
//
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//使用指针
//	int* p = &arr[0];
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//使用指针
//	int* p = &arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//p+i  --->  &arr[i]
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	//[a b c d e f \0]
//
//	return 0;
//}

//指针-指针(地址-地址)的前提是两个指针指向同一块空间的
//得到的是指针和指针之间元素的个数
//int* p +1 ---> 4

//int main()
//{
//	char ch[7];
//	int arr[10] = { 0 };
//	&arr[9] - &ch[5];
//	int ret = &arr[9] - &arr[0];
//	//&arr[0] + 9 ---> &arr[9]
//
//	printf("%d\n", ret);//?
//
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int len = strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	int count = 0;
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
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//指针的关系运算
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = &arr[0];
//	int* p = arr; //数组名就是数组首元素的地址
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int* p;//局部变量，如果不初始化的话，会得到一个随机值
//	*p = 20;
//
//	int n = 10;
//	int* p2 = &n;
//	*p2 = 20;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = &arr[0];
//	int i = 0;
//	for (i = 0; i <= 11; i++)
//	{
//		//当指针指向的范围超出数组arr的范围时，p就是野指针
//		*(p++) = i;
//
//	}
//
//	return 0;
//}

int* test()
{
	int n = 100;
	//...
	return &n;
}

int main()
{
	int* p = test();
	printf("%p\n", *p);
	return 0;
}