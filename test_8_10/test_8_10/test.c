#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	int a = 10;
//	int* p = &a;//��ʼ��
//
//	int* ptr = NULL;//��ָ��
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
//		//ʹ��p
//	}
//
//	if (ptr != NULL)
//	{
//		*ptr = 100;
//	}
//	return 0;
//}

//&arr[0] - ������Ԫ�صĵ�ַ
//arr -- ������Ҳ��ʾ������Ԫ�صĵ�ַ
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
//	//���������ʹ��p�Ļ���p����Ұָ����
//	p = NULL;
//	return 0;
//}


//����ջ�ռ��ַ������
test()
{
	//�ֲ�����
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
//	int c = 0;//��ʱ����
//
//	//��ֵ����
//	//��ֵ���õ�ʱ�򣬺���ʵ�δ��ݸ��βκ��β���ʵ�ε�һ����ʱ����
//	//���Զ��βε��޸Ĳ���Ӱ��ʵ��
//	Swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
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
//	//��ֵ����
//	int m = Max(a, b);
//	printf("%d\n", m);
//	return 0;
//}

//strlen��ģ��ʵ��
//��׳��/³����
// 
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//ȷ����ָ�����Ч��
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
//	//��������������Ԫ�صĵ�ַ
//	//��������������
//	//1. sizeof(������),�������������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
//	//2. &���������������������ʾ�������飬 &������: ȡ��������������ĵ�ַ
//	//�������⣬���������е����������������׵�ַ
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


//ʹ��ָ���������

//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//����
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//	}
//	//���
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

//ð������
//����˼��:�������ڵ�Ԫ�ؽ��бȽ�

void sort(int arr[], int sz)
{
	//ȷ��ð�����������
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð������
		int flag = 1;//���������������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				//����
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0; //���������
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
	//������Ҫ������Ϊ����
	int sz = sizeof(arr) / sizeof(arr[0]);
	sort(arr, sz);
	print(arr, sz);
	return 0;
}