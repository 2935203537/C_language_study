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
//	//ָ�������Ϊ�˴�ŵ�ַ��
//	//��ָ������Ĵ�С��ȡ���ڴ��һ����ַ��Ҫ���Ŀռ�ģ�
//	//32λ�Ļ����ϣ���32����ַ�ߣ���ַ���ϴ�������ĵ��ź�
//	//ת���������źź�
//	//��32��0/1��ɵĶ��������о��ǵ�ַ
//	//��ַ����32��0/1��ɵĶ��������еĻ�����ô��������ַ��Ҫ�Ŀռ�Ĵ�С����4���ֽ�
//	//����ָ������Ĵ�С����4���ֽڣ�
//
//	//X64������64λ�Ļ���
//	//64����ַ�ߵģ���ַ����64��0/1��ɵĶ���������,Ҫ��������ĵ�ַ������Ҫ8���ֽ�
//	//����ָ�������С����8���ֽ�
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

//1.ָ���������������
//2.ָ�����;����ˣ�ָ�����+1/-1������ʱ��,һ�����������ֽ�(ָ��Ĳ���)
//+n/-n  ��������n��ָ��ֵ

//ָ�����͵���Щ�ص㣬��ôʹ���أ�
//����:
//1 2 3 4 5 6 7 8 9 10
//1.�����±�ķ�ʽ����
//2.ָ�뷽ʽ����

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
//	//// ָ�뷽ʽ����
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = &arr[0];
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *(p+i));
//	//}
//
//	//�±�ķ�ʽ
//	//int i = 0;
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//
//	//const ���α�����ʹ������������ܱ��޸�
//	//const ����ָ��
//	//1. const����*�����
//	//   ���Ƶ���ָ��ָ������ݣ���˼�ǲ���ͨ��ָ�����޸�ָ��ָ������ݣ�����ָ����������ǿ����޸ĵ�
//	//
//	//2. const����*���ұ�
//	//   ���Ƶ���ָ�����������˼�ǲ����޸�ָ�������ָ�򣬵��ǿ����޸�ָ��ָ�������
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
//	//ʹ��ָ��
//	int* p = &arr[0];
//	return 0;
//}

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	//ʹ��ָ��
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

//ָ��-ָ��(��ַ-��ַ)��ǰ��������ָ��ָ��ͬһ��ռ��
//�õ�����ָ���ָ��֮��Ԫ�صĸ���
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

//ָ��Ĺ�ϵ����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int* p = &arr[0];
//	int* p = arr; //����������������Ԫ�صĵ�ַ
//	while (p < arr + sz)
//	{
//		printf("%d ", *p);
//		p++;
//	}
//	return 0;
//}

//int main()
//{
//	int* p;//�ֲ��������������ʼ���Ļ�����õ�һ�����ֵ
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
//		//��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p����Ұָ��
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