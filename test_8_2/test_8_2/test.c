#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NUMBER 5

//题目一 判断三角形
int main1() {
    int a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) { // 注意 while 处理多个 case
        // 64 位输出请用 printf("%lld") to 
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

//题目二 九九乘法表
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
//题目三 求最大值
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
            max = arr[i]; //更新最大值
        }
    }
    printf("%d\n", max);
    return 0;
}
//题目四 计算1/1-1/2+1/3-1/4+1/5 ······ + 1/99 - 1/100 的值，打印出结果
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
//题目五 编写程序数一下 1到100的所有整数中出现多少个数字9
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

//练习题三
int main6()
{
    int arr[] = { 1,2,(3,4),5 };
    printf("%d\n", sizeof(arr));
    return 0;
}
//练习题
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
//    while (scanf("%d %d", &n, &m) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
//        int arr[n][m];
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                scanf("%d", &arr[i][j]);
//            }
//        }
//        //二维数组进行了初始化
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

// 辗转相除法求最大公约数
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
//    printf("最大公约数是：%d\n",b);
//    return 0;
//}

//空心正方形图案
//int main() {
//    int a;
//    while (scanf("%d", &a) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
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

//X形图案
//int main() {
//    int n;
//    while (scanf("%d", &n) != EOF) { // 注意 while 处理多个 case
//        // 64 位输出请用 printf("%lld") to 
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
    //arr是这个地址 4个字节 / 4 = 1
    int len1 = sizeof(arr) / sizeof(arr[0]);
    printf("测试 %d\n", len1);
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

//int main()
//{
//    int arr[10] = { 0 };
//    int len = sizeof(arr) / sizeof(arr[0]);
//    Init(arr, len);
//    Print(arr, len);
//
//    Reverse(arr, len);
//    Print(arr, len);
//    return 0;
//}

//int main()
//{
//    int i;
//    int tensu[NUMBER];
//    int sum = 0;
//
//    puts("请输入学生的分数");
//    for (i = 0; i < NUMBER; i++)
//    {
//        printf("%2d号 :", i + 1);
//        scanf("%d", &tensu[i]);
//        sum += tensu[i];
//    }
//    printf("总分:%5d\n", sum);
//    printf("平均分:%5.1f\n", (double)sum / NUMBER);
//    return 0;
//}

//int main()
//{
//    int i;
//    int tensu[NUMBER];
//    int max, min;
//
//    puts("请输入学生的分数。");
//    for (i = 0; i < NUMBER; i++)
//    {
//        printf("%2d 号 :", i + 1);
//        scanf("%d", &tensu[i]);
//    }
//    min = max = tensu[0];
//    for (i = 1; i < NUMBER; i++)
//    {
//        if (tensu[i] > max)
//        {
//            max = tensu[i];
//        }
//        if (tensu[i] < min);
//        {
//            min = tensu[i];
//        }
//    }
//    printf("最高分 :%d\n", max);
//    printf("最低分 :%d\n", min);
//    return 0;
//}

//及格学生一览表
//int main()
//{
//    int i;
//    int snum = 0;
//    int tensu[NUMBER];
//    int succs[NUMBER];
//    puts("请输入学生的分数。");
//    for (i = 0; i < NUMBER; i++)
//    {
//        printf("%2d号 :", i + 1);
//        scanf("%d", &tensu[i]);
//        if (tensu[i] >= 60)
//        {
//            succs[snum++] = i;
//        }
//    }
//    puts("及格学生一览表");
//    puts("------------");
//    for (i = 0; i < snum; i++)
//    {
//        printf("%2d号(%3d分)\n", succs[i] + 1, tensu[succs[i]]);
//
//    }
//    return 0;
//}

//成绩分布图

int main()
{
    int i, j;
    int num;
    int tensu[NUMBER];
    int bunpu[11] = { 0 };
    
    printf("请输入学生人数:");
    do {
        scanf("%d", &num);
        if (num < 1 || num > NUMBER)
        {
            printf("\a人数范围[1到%d]:", NUMBER);
        }
    } while (num < 1 || num > NUMBER);

    puts("请输入学生的分数。");
    for (i = 0; i < num; i++)
    {
        printf("%2d号", i + 1);
        do {
            scanf("%d", &tensu[i]);
            if (tensu[i] < 0 || tensu[i] > 100)
            {
                printf("\a分数范围[0到100]:");
            }
        } while (tensu[i] < 0 || tensu[i] > 100);
        bunpu[tensu[i] / 10]++;
    }
    puts("\n □ 分布图 □");
    printf("        100");
    for (j = 0; j < bunpu[10]; j++)
    {
        putchar('*');
    }
    putchar('\n');
    for (i = 9; i >= 0; i--)
    {
        printf("%3d - %3d:", i * 10, i * 10 + 9);
        for (j = 0; j < bunpu[i]; j++)
        {
            putchar('*');
        }
        putchar('\n');
    }
    return 0;
}