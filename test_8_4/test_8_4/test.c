#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Fact(int n)
{
	if (n <= 0)
	{
		return 1;
	}
	else // n > 0
		return n * Fact(n - 1);
}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fact(n);
//	printf("%d\n", ret);
//	return 0;
//}

//输入一个整数m，按照顺序打印整数的每一位。

//计算出1000以内的质数
int main2()
{
	int i, no;
	unsigned long counter = 0;
	
	for (no = 2; no <= 1000; no++)
	{
		for (i = 2; i < no; i++)
		{
			counter++;
			if (no % i == 0)
			{


				break;
			}
		}
		if (no == i)
		{
			printf("%d\n", no);
		}
	}
	printf("乘除运算的次数 ：%lu\n", counter);
	return 0;
}

void Print(int n)
{
	if (n > 9)
	{
		Print(n / 10);
	}
	printf("%d ", n % 10);
}

int count = 0;
//斐波那契数列
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}



int main3()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);
	return 0;  
}

int main4()
{
	int i, no;
	unsigned long counter = 0;

	no = 2;
	printf("%d\n", no++);

	for (; no <= 1000; no += 2)
	{
		for (i = 2; i < no; i++)
		{
			counter++;
			if (no % i == 0)
			{
				break;
			}
		}
		if (no == i)
		{
			printf("%d\n", no);
		}
	}
	printf("乘除运算的次数：%lu\n", counter);
	return 0;
}

int main5()
{
	int i, no;
	unsigned counter = 0;

	no = 2;
	printf("%d\n", no++);

	for (; no <= 1000; no += 2)
	{
		for (i = 3; i < no; i += 2)
		{
			counter++;
			if (no % i == 0)
			{
				break;
			}
		}
		if (no == i)
		{
			printf("%d\n", no);
		}
	}
	printf("乘除运算的次数：%lu\n", counter);
	return 0;
}

int main6()
{
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;

	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (no = 5; no <= 1000; no += 2)
	{
		for (i = 1; i < ptr; i++)
		{
			counter++;
			if (no % prime[i] == 0)
			{
				break;
			}
		}
		if (ptr == i)
		{
			prime[ptr++] = no;
		}
	}
	for (i = 0; i < ptr; i++)
	{
		printf("%d\n", prime[i]);
	}
	printf("乘除运算的次数：%lu\n", counter);
	return 0;
}

int main()
{
	int i, no;
	int prime[500];
	int ptr = 0;
	unsigned long counter = 0;

	prime[ptr++] = 2;
	prime[ptr++] = 3;

	for (no = 5; no <= 1000; no += 2)
	{
		int flag = 0;
		for (i = 1; counter++, prime[i] * prime[i] <= no; i++)
		{
			counter++;
			if (no % prime[i] == 0)
			{
				flag = 1;
				break;
			}
		}
		if (!flag)
		{
			prime[ptr++] = no;
		}
	}
	for (i = 0; i < ptr; i++)
	{
		printf("%d\n", prime[i]);
	}
	printf("乘除运算的次数：%lu\n", counter);
	return 0;
}