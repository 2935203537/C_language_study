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

//int main()
//{
//	int cont;
//	do {
//		int no;
//		printf("������һ������:");
//		scanf("%d", &no);
//		if (no % 2)
//		{
//			puts("�������������");
//		}
//		else
//		{
//			puts("���������ż��");
//		}
//		printf("Ҫ�ظ�һ���� ��Yes������0/No������9����");
//		scanf("%d", &cont);
//	} while (cont == 0);
//	return 0;
//}

//int main()
//{
//	int num;
//
//	do
//	{
//		printf("������һ���Ǹ�����:");
//		scanf("%d", &num);
//		if (num < 0)
//		{
//			puts("�벻Ҫ���븺����");
//		}
//	} while (num < 0);
//	printf("������������ʾ�Ľ����");
//	do
//	{
//		printf("%d", num % 10);
//		num = num / 10;
//	} while (num > 0);
//	puts("��");
//	return 0;
//}


//int main()
//{
//	int num;
//	int dig;
//	
//	do {
//		printf("������һ���Ǹ�����:");
//		scanf("%d", &num);
//		if (num < 0)
//		{
//			puts("\a �벻Ҫ���븺����");
//		}
//	} while (num < 0);
//		dig = 0;
//		do {
//			num = num / 10;
//			dig = dig + 1;
//		} while (num > 0);
//		printf("��������λ����%d��\n", dig);
//		return 0;
//}

//int main()
//{
//	int no = 1;
//	int sum = 0;
//	
//	do {
//		sum = sum + no;
//		no = no + 1;
//	} while (no <= 5);
//	printf("1��5�ĺϼ�ֵ��%d��\n", sum);
//	return 0;
//}

//int main()
//{
//	int no = 1;
//	int sum = 0;
//
//	do {
//		sum += no;
//		no++;
//	} while (no <= 5);
//	printf("1��5�ĺϼ�ֵ��%d��\n", sum);
//	return 0;
//}

//int main()
//{
//	int no;
//	printf("������һ������:");
//	scanf("%d", &no);
//
//	while (no >= 0)
//	{
//		printf("%d ", no);
//		no--;
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int no;
//
//	printf("������һ��������:");
//	scanf("%d", &no);
//
//	while (no >= 0)
//	{
//		printf("%d ", no--);
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int i, no;
//
//	printf("������һ��������:");
//	scanf("%d", &no);
//
//	i = 0;
//	while (i <= no)
//	{
//		printf("%d ", i++);
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int no;
//
//	printf("������һ��������:");
//	scanf("%d", &no);
//
//	while (no-- > 0)
//	{
//		putchar('*');
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int sum = 0;
//	int num, tmp;
//
//	printf("Ҫ������ٸ�����:");
//	scanf("%d", &num);
//
//	while (i < num)
//	{
//		printf("No.%d:", ++i);
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	printf("�ϼ�ֵ��%d\n", sum);
//	printf("ƽ��ֵ��%.2f\n", (double)sum / num);
//	return 0;
//}

//int main()
//{
//	int i, no;
//
//	printf("������һ��������:");
//	scanf("%d", &no);
//
//	for (i = 0; i <= no; i++)
//	{
//		printf("%d ", i);
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int i, no;
//	
//	printf("������һ��������:");
//	scanf("%d", &no);
//	for (i = 1; i <= no; i++)
//	{
//		putchar('*');
//	}
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int i;
//	int sum = 0;
//	int num, tmp;
//
//	printf("������ٸ�����:");
//	scanf("%d", &num);
//
//	for (i = 0; i < num; i++)
//	{
//		printf("No.%d:", i + 1);
//		scanf("%d", &tmp);
//		sum += tmp;
//	}
//	printf("�ϼ�ֵ: %d\n", sum);
//	printf("ƽ��ֵ: %.2f\n", (double)sum / num);
//	return 0;
//}

//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= 9; j++)
//		{
//			printf("%3d", i * j);
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//int main()
//{
//	int cont;
//
//	do {
//		int num, i;
//		
//		do
//		{
//			printf("������һ���Ǹ�����:");
//			scanf("%d", &num);
//			if (num < 0)
//			{
//				puts("\a�벻Ҫ���븺������");
//			}
//		} while (num < 0);
//			for (i = 1; i <= num; i++)
//			{
//				putchar('*');
//			}
//			putchar('\n');
//
//			printf("�Ƿ����ִ�У���Yes������0/No������9����");
//			scanf("%d", &cont);
//	} while (!cont);
//	return 0;
//}


//int main()
//{
//	int i, j;
//	int width,height;
//
//	puts("�����������һ�������Ρ�");
//	printf("��");
//	scanf("%d", &width);
//	printf("�ߣ�");
//	scanf("%d", &height);
//	for (i = 1; i <= height; i++)
//	{
//		for (j = 1; j <= width; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//int main()
//{
//	int i, j, ln;
//
//	printf("�������м��㣺");
//	scanf("%d", &ln);
//
//	for (i = 1; i <= ln; i++)
//	{
//		for (j = 1; j <= ln - i; j++)
//		{
//			putchar(' ');
//		}
//		for (j = 1; j <= i; j++)
//		{
//			putchar('*');
//		}
//		putchar('\n');
//	}
//	return 0;
//}

//�ؼ���
/*
auto  break  case  char  const  continue
default  do  double  else  enum  extern
float  for  goto  if  int  long
register  return  short  signed  sizeof  static
strut  switch  typedef  union  unsigned  void
volatile  while
*/

//int main()
//{
//	puts("�ںܾúܾ���ǰ�и��ط�ס��һλ�Ϲ�����һλ�����š�"
//		"�Ϲ�������ذ��������š�");
//	return 0;
//}

//int main()
//{
//	int i;
//	int vc[5];
//	for (i = 0; i < 5; i++)
//	{
//		vc[i] = i + 1;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("vc[%d] = %d\n", i, vc[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i;
//	double vd[5];
//
//	for (i = 0; i < 5; i++)
//	{
//		vd[i] = 0.0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("vd[%d] = %.1f\n", i, vd[i]);
//	}
//	return 0;
//}

int main()
{
	int i;
	int va[5] = { 15,20,30 };
	int vb[5];

	for (i = 0; i < 5; i++)
	{
		vb[i] = va[i];
	}
	puts("va va");
	puts("------");
	for (i = 0; i < 5; i++)
	{
		printf("%3d%3d\n", va[i], vb[i]);
	}
	return 0;
}