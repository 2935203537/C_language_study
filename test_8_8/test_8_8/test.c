#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//函数调用操作符
//函数的定义
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
//	//函数调用
//	int ret = Add(2, 3);// () - 函数调用操作符
//	// () 的操作数: Add, 2, 3
//	//
//	// () 函数调用操作符, 最少有几个操作数?
//
//	printf("%d\n", ret);
//	return 0;
//}

//sizeof 是不是函数呢?

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
//	//相邻操作符的
//	int a = 3 + 4 * 5;//优先级
//	int b = 3 + 4 + 5;//结合性
//
//	return 0;
//} 



//int countOnes(int num) {
//    int count = 0;
//    while (num != 0) {
//        count += num & 1;  // 判断最低位是否为1
//        num >>= 1;         // 右移一位，继续判断下一位
//    }
//    return count;
//}
//
//int main() {
//    int num;
//    printf("请输入一个整数：");
//    scanf("%d", &num);
//
//    int onesCount = countOnes(num);
//    printf("%d 的二进制表示中包含 %d 个1。\n", num, onesCount);
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
//	//输出多少？
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
//	int a = 10;//变量创建的本质是: 在内存上开辟空间
//	//要向内存申请4个字节的空间,存放数据10
//	//10 - a
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//0x 00 00 00 0a
//	//
//	//&a;//&-----取地址操作符
//	//1&2
//	printf("%p\n", &a);
//	//对于a来说,我们拿到的是a所占4个字节的第一个字节的地址 (地址较小的那个字节的地址)
//	int * ptr = &a;//ptr叫指针变量 (因为是存放指针的变量,所以叫指针变量)
//	//编号 == 地址 == 指针
//	int * p = &a; //p的类型是int *
//	//指针变量就是用来存放地址的
//	//存放在指针变量的值,都会被当成地址用
//	return 0;
//}


int main()
{
	int a = 10;

	int * p = &a;
	printf("%d\n", a);
	*p = 0;//* 解引用操作符/间接访问操作符
	//*p的意思就是通过p中存放的地址，找到地址指向的空间，*p就是a
	printf("%d\n", a);
	return 0;
}