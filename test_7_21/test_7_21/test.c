#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

//strlen - string length
//sizeof

//int main()
//{
//	size_t len = strlen("abc");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int len = strlen("c:\test\123.c");
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	/*
//	printf("%d\n", 123);
//	*/
//	printf("��\n��\n��\nɽ\n");
//	printf("ι!\n����!\n\n�ټ���\n");
//	return 0;
//}

//int main()
//{
//	int i;
//	printf("������һ������:");
//	scanf("%d", &i);
//	printf("����������10�Ľ����%d\n", i + 10);
//	printf("����������10�Ľ����%d\n", i - 10);
//	return 0;
//}

//int main()
//{
//	puts("��");
//	puts("��");
//	puts("��");
//	puts("ɽ");
//	int n1, n2;
//	puts("����������������");
//	printf("���� 1:");
//	scanf("%d", &n1);
//	printf("���� 2:");
//	scanf("%d", &n2);
//	printf("���ǵĳ˻���%d\n", n1 * n2);
//	int n3, n4, n5;
//	printf("���� 1:");
//	scanf("%d", &n3);
//	printf("���� 2:");
//	scanf("%d", &n4);
//	printf("���� 3:");
//	scanf("%d", &n5);
//	printf("���ǵĺ���%d", n3 + n4 + n5);
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}


//int main()
//{
//	int no;
//	printf("������һ������:");
//	scanf("%d", &no);
//	printf("���һλ��%d��\n", no % 10);
//	int na, nb;
//	puts("����������������");
//	printf("����A:");
//	scanf("%d", &na);
//	printf("����B:");
//	scanf("%d", &nb);
//	printf("A����B��%d��%d��\n", na / nb, na % nb);
//	return 0;
//}

int main(void)
{
	double vx;
	printf("������һ��ʵ��:");
	scanf("%lf", &vx);
	printf("���������%f\n", vx);
	return 0;
}