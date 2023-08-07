#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//��Ŀһ �ж�������
int main1() {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // ע�� while ������ case
        // 64 λ������� printf("%lld") to 
        if ((a + b) > c && (a + c) > b && (b + c) > a)
        {
            if (a == b && b == c)
            {
                printf("Equilateral triangle!\n");
            }
            else if ((a == b) && (b != c) || (a == c) && (c != b) ||
                (b == c) && (c != a))
            {
                printf("Isosceles triangle!\n");
            }
            else {
                printf("Ordinary triangle!\n");
            }
        }
        else {
            printf("Not a triangle!\n");
        }
    }
    return 0;
}

//��Ŀ�� �žų˷���
int main2()
{
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" %d * %d = %d ", j, i, i * j);
        }
        printf("\n");
    }
    return 0;
}
//��Ŀ�� �����ֵ
int main3()
{
    int arr[10] = { 0 };
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i]; //�������ֵ
        }
    }
    printf("%d\n", max);
    return 0;
}
//��Ŀ�� ����1/1-1/2+1/3-1/4+1/5 ������������ + 1/99 - 1/100 ��ֵ����ӡ�����
int main4()
{
    float sum = 0;
    int flg = 1;
    for (int i = 1; i <= 100; i++)
    {
        sum += 1.0 / i * flg;
        flg = -flg;
    }
    printf("%f\n", sum);
    return 0;
}
//��Ŀ�� ��д������һ�� 1��100�����������г��ֶ��ٸ�����9
int main5()
{
    int count = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 10 == 9)
        {
            count++;
        }else if (i / 10 == 9)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}

//��ϰ����
int main6()
{
    int arr[] = { 1,2,(3,4),5 };
    printf("%d\n", sizeof(arr));
    return 0;
}
//��ϰ��
int main7()
{
    int arr[] = { 1,2,4,5 };
    printf("%d\n", &arr[0]);
    printf("%d\n", &arr[1]);
    printf("%d\n", &arr[2]);
    printf("%d\n", &arr[3]);
    return 0;
}
int main8()
{
    char acX[] = "abcdefg";

    char acY[] = { 'a','b','c','d','e','f','g' };

    printf("sizeof = %d,strlen = %d\n", sizeof(acX), strlen(acX));
    return 0;
}

int main9()
{
    int arr[] = { 1,12,3,7 };
    int len = sizeof(arr) / sizeof(arr[0]);

    float ret = 0;

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        sum += arr[i];
    }
    printf("%f\n", sum * 1.0 / len);
    return 0;
}

//int main() {
//    int n, m;
//    while (scanf("%d %d", &n, &m) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        int arr[n][m];
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        //��ά��������˳�ʼ��
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                printf("%d", arr[j][i]);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//int main()
//{
//    int arr[] = { 1,2,3,4,6,7 };
//    int arr2[] = { 4,5,6,7,8,9 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
//    printf("==================\n");
//
//    for (int i = 0; i < len; i++)
//    {
//        int tmp = arr[i];
//        arr[i] = arr2[i];
//        arr2[i] = tmp;
//    }
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    for (int i = 0; i < len; i++)
//    {
//        printf("%d ", arr2[i]);
//    }
//    printf("\n");
//    return 0;
//}

// շת����������Լ��
//int main()
//{
//    int a = 24;
//    int b = 18;
//    int c = a % b;
//    while (c != 0)
//    {
//        a = b;
//        b = c;
//        c = a % b;
//    }
//    printf("���Լ���ǣ�%d\n",b);
//    return 0;
//}

//����������ͼ��
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        for (int i = 0; i < a; i++)
//        {
//            for (int j = 0; j < a; j++)
//            {
//                if (i == 0 || i == a - 1)
//                {
//                    printf("* ");
//                }
//                else if (j == 0 || j == a - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//X��ͼ��
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) { // ע�� while ������ case
//        // 64 λ������� printf("%lld") to 
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == j || (i + j) == n - 1)
//                {
//                    printf("*");
//                }
//                else
//                {
//                    printf(" ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

void Init(int arr[], int len)
{
    //arr�������ַ 4���ֽ� / 4 = 1
    int len1 = sizeof(arr) / sizeof(arr[0]);
    printf("���� %d\n", len1);
    for (int i = 0; i < len; i++)
    {
        arr[i] = i;
    }
}

void Print(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Reverse(int arr[], int len)
{
    int i = 0;
    int j = len - 1;
    while (i < j)
    {
        int tmp = arr[i];
        arr[i] = arr[j];
    }
}

int main()
{
    int arr[10] = { 0 };
    int len = sizeof(arr) / sizeof(arr[0]);
    Init(arr, len);
    Print(arr, len);

    Reverse(arr, len);
    Print(arr, len);
    return 0;
}