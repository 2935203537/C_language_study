#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�������ò�����
//�����Ķ���
int Add(int x, int y)
{
	return x + y;
}

void test()
{
	printf("hehe\n");
}

//int main()
//{
//	//��������
//	int ret = Add(2, 3);// () - �������ò�����
//	// () �Ĳ�����: Add, 2, 3
//	//
//	// () �������ò�����, �����м���������?
//
//	printf("%d\n", ret);
//	return 0;
//}

//sizeof �ǲ��Ǻ�����?

//int main()
//{
//	//int n = sizeof(int);
//	//printf("%d\n", n);
//
//	int a = 10;
//	int n = sizeof(a);
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	//���ڲ�������
//	int a = 3 + 4 * 5;//���ȼ�
//	int b = 3 + 4 + 5;//�����
//
//	return 0;
//} 



//int countOnes(int num) {
//    int count = 0;
//    while (num != 0) {
//        count += num & 1;  // �ж����λ�Ƿ�Ϊ1
//        num >>= 1;         // ����һλ�������ж���һλ
//    }
//    return count;
//}
//
//int main() {
//    int num;
//    printf("������һ��������");
//    scanf("%d", &num);
//
//    int onesCount = countOnes(num);
//    printf("%d �Ķ����Ʊ�ʾ�а��� %d ��1��\n", num, onesCount);
//
//    return 0;
//}

//int main()
//{
//	printf("%d\n", 5 * 6 / 2);
//	return 0;
//}


//#include <stdio.h>
//int fun()
//{
//	static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	//������٣�
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int ret = (++i) + (++i) + (++i);
//	printf("%d\n", ret);
//	printf("%d\n", i);
//	return 0;
//}


//int main()
//{
//	int a = 10;//���������ı�����: ���ڴ��Ͽ��ٿռ�
//	//Ҫ���ڴ�����4���ֽڵĿռ�,�������10
//	//10 - a
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//0x 00 00 00 0a
//	//
//	//&a;//&-----ȡ��ַ������
//	//1&2
//	printf("%p\n", &a);
//	//����a��˵,�����õ�����a��ռ4���ֽڵĵ�һ���ֽڵĵ�ַ (��ַ��С���Ǹ��ֽڵĵ�ַ)
//	int * ptr = &a;//ptr��ָ����� (��Ϊ�Ǵ��ָ��ı���,���Խ�ָ�����)
//	//��� == ��ַ == ָ��
//	int * p = &a; //p��������int *
//	//ָ���������������ŵ�ַ��
//	//�����ָ�������ֵ,���ᱻ���ɵ�ַ��
//	return 0;
//}


int main()
{
	int a = 10;

	int * p = &a;
	printf("%d\n", a);
	*p = 0;//* �����ò�����/��ӷ��ʲ�����
	//*p����˼����ͨ��p�д�ŵĵ�ַ���ҵ���ַָ��Ŀռ䣬*p����a
	printf("%d\n", a);
	return 0;
}