#define _CRT_SECURE_NO_WARNINGS
//函数的实现
//函数默认也是具有外部链接属性的
//static 修饰函数的时候，函数的外部链接属性，就变成内部链接属性
static int Add(int x, int y)
{
	return x + y;
}
//static int g_val = 2023;
//全局变量是具有外部链接属性的
//static 修饰全局变量后，外部链接属性就变成了内部链接属性
//其他.c文件再也无法使用了
