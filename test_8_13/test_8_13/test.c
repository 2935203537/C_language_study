#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//C������ϰ��

/*
* ���ֲ��ң�������һ������� һ�����ݵ��� ���в���
* 1 3 5 7 9 12 15 
*/

//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] == key)
//		{
//			return mid;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return -1;//�����±� û�и���
//}
//
//
//int main()
//{
//	int arr[] = { 1,3,5,7,9,12,17,19 };
//	int ret = bin_search(arr, 0, sizeof(arr) / sizeof(arr[0]), 1);
//	if (ret == -1)
//	{
//		printf("%s\n", "û����Ҫ�ҵĹؼ��֣�");
//	}
//	else
//	{
//		printf("�ҵ�����Ҫ�ҵ����ݵ��±꣺%d\n", ret);
//	}
//	return 0;
//}


/*
* 32λ�����
*/

//int main()
//{
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &i);
//	printf("%d\n", &arr[0]);
//	printf("%d\n", &arr[9]);
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	arr[i] = 0;
//	//	printf("hello bit\n");
//	//}
//	return 0;
//}


//int main()
//{
//	int money = 0;
//	scanf("%d", &money);//����
//
//	if (money < 0)
//	{
//		//......
//	}
//
//	int total = 2 * money - 1;//�ܹ����Ժȶ���ƿ��ˮ
//	int empty = money;//�ܹ��Ŀ�ƿ��
//	//���� ��ʼ��λmoney ���˶���Ǯ ���� ������������ݵ�
//
//	//ֻҪ��ƿ�ӵ����� ����1 ���ܻ�
//	while (empty > 1)
//	{
//		total += empty / 2;//
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n", total);
//
//	return 0;
//}



//��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ �ϰ벿��
//	for (int i = 0; i < line; i++)
//	{
//		//��ӡ�ո�
//		for (int j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*��
//		for (int j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//�°벿��
//	for (int i = 0; i < line - 1; i++)
//	{
//		//�ո�
//		for (int j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//*��
//		for (int j = 0; j < (line - 1 - i) * 2 - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		//1���� ��ǰ���� i�ж���λ
//		int count = 0;
//		int tmp = i;
//		while (tmp != 0)
//		{
//			count++;
//			tmp /= 10;
//		}
//		tmp = i;
//		//2��ȥ�� ÿһλ
//		int sum = 0;
//		while (tmp != 0)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;//153 / 10 = 15
//		}
//
//		if (sum == i)
//		{
//			printf("countλ������: %d\n", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = 0;
//	scanf("%d", &n);
//	int sum = 0;
//	//a + aa + aaa + aaaa + aaaaa
//	//2  22  => 2 * 10 + 2
//	//22  222  => 22 * 10 + 2
//	//222  2222  => 222 * 10 + 2
//	int tmp = 0;
//	for (int i = 0; i < n; i++)
//	{
//		tmp = tmp * 10 + a;
//		sum += tmp;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//	{
//		return 1;
//	}
//	return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	printf("%d\n", Fib(1));
//	printf("%d\n", Fib(2));
//	printf("%d\n", Fib(3));
//	printf("%d\n", Fib(4));
//
//	return 0;
//}

//int Func(int n, int k)
//{
//	if (k == 0)
//	{
//		return 1;
//	}
//	else if (k >= 1)
//	{
//		return n * Func(2, k - 1);
//	}
//}
//
//int main()
//{
//	printf("%d\n", Func(2, 3));
//	return 0;
//}

//int Func2(int n)
//{
//	if (n <= 9)
//	{
//		return n;
//	}
//	return n % 10 + Func2(n / 10);
//}
//
//int main()
//{
//	printf("%d\n", Func2(1729));
//	return 0;
//}

//int main()
//{
//	// n ^ n = 0
//	// 0 ^ n = n
//	int arr[] = { 1,2,3,2,1,5,3 };
//	int ret = 0;
//	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//	{
//		ret ^= arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}

//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else
//	{
//		printf("<\n");
//	}
//	return 0;
//}

//void print(int n)
//{
//	//ż��λ
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//}
//
//void main()
//{
//	print(7);
//}

//void Func4(int m, int n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	while (tmp != 0)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	printf("%d\n", count);
//}
//
//void main()
//{
//	Func4(2,3);
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}
















 


















