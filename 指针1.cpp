﻿// 指针1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//键盘输入两个数，用指针将两个数输出

#include <stdio.h>

int main()
{
	int a, b;//定义变量
	int* p1, * p2;//声明指针变量
	printf_s("请输入两个数字，中间记得逗号隔开:");
	scanf_s("%d,%d", &a, &b);//输入两个数
	p1 = &a;//将地址赋给指针变量，或者理解为，p1取a的地址
	p2 = &b;
	printf_s("数字为：%d,%d", *p1, *p2);//输出
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件;
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
