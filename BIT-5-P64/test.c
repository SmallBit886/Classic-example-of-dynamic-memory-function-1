#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4. 几个经典的笔试题
//4.1 题目1：错误代码
//void GetMemory(char* p)//str以传值的形式传给p
//{
//	p = (char*)malloc(100);//p是形参；一出函数就被销毁
//}
////函数返回后；动态内存未释放；并且无法找到；会造成内存的泄露
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//str依旧是空指针
//	strcpy(str, "hello world");//对空指针解引用，越界访问；程序崩溃
//	printf(str);
//}
////传地址改正代码
//void GetMemory(char** p)//str以传地址的形式传给p
//{
//	*p = (char*)malloc(100);//p是形参；一出函数就被销毁
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//str是地址
//	strcpy(str, "hello world");//对动态内存首地址针解引用
//	printf(str);//hello world
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
////通过函数改正代码
//char* GetMemory(char* p)//str以传值的形式传给p
//{
//	p = (char*)malloc(100);//p是形参；一出函数就被销毁
//	return p;//返回动态内存的地址
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);//str是地址
//	strcpy(str, "hello world");//对动态内存首地址针解引用
//	printf(str);//hello world
//
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

