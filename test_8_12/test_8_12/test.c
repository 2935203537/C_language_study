#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ָ������
//���:
//�������� - ������͵����� int arr[10]
//�ַ����� - ����ַ������� char ch[5]
//ָ������ - ���ָ�������

//int main()
//{
//	int a = 10;
//	int* p = &a;//p��һ��ָ��
//	//a�����ͱ�����ռ��4���ֽڵĿռ䣬a�����Լ��ĵ�ַ��&a�õ��ľ���a��ռ4���ֽڵĵ�һ���ֽڵĵ�ַ
//	//p��ָ�������ռ��4/8���ֽڵĿռ䣬pҲ�����Լ��ĵ�ַ��&p���õ���p�ĵ�ַ
//	int** pp = &p;
//
//	printf("%d\n", **pp);//10
//
//	//pp Ҳ��ָ�������pp�Ƕ���ָ�����
//	//int*** ppp = &pp;//ppp������ָ��
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

//ģ���ά����
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
//	char* pc = &ch;//pc�����ַ�ָ�����
//	//�ַ�ָ�������������ŵ�ַ��
//
//	const char* p = "abcdefghi";//���ǽ�abcdefghi\0�ַ����ŵ�p��,���ǽ����ַ�a�ĵ�ַ�洢��p��
//	//"abcdefghi" ��һ�������ַ������ǲ��ܱ��޸ĵ�
//	//b = 2+3;
//	//���ʽ����2������:ֵ���ԣ���������
//	//2+3 ֵ��5
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
//	int (*ptr)[6] = &arr;//����ĵ�ַ
//	//ptr������ָ��
//
//	char* ch[8];
//	char* (*p2)[8] = &ch;//p2������ָ��
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	arr;//������Ԫ�صĵ�ַ - int *
//	&arr;//����ĵ�ַ     - int (*)[10]
//	int (*p)[10] = &arr;
//	return 0;
//}

//int main()
//{
// ����������д
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


//��ά����Ҳ������
//��ά�����������Ҳ��������Ԫ�صĵ�ַ

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


//����ָ�����
//����ָ�� - ��ָ�� - ��ָ�������ָ�� - �Ǵ�������ַ��ָ��
//����ָ�� - ��ָ�� - ��ָ������ָ�� - �Ǵ�ź�����ַ��ָ�룡��

//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//������ - ������Ԫ�صĵ�ַ
//	//&������ - ����ĵ�ַ
//
//	//���ں�����&�������ͺ��������Ǻ����ĵ�ַ
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

//void (*)(); //����ָ������
//(void (*)()) //ǿ������ת��
//(int*)0x0012ff40
//Add - 0x0012ff40
//    - 0
int main()
{
	//
	//  ����0��ַ���ĺ��������õĺ������������޲Σ�����������void
	//  Add
	return 0;
}