#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//4. ��������ı�����
//4.1 ��Ŀ1���������
//void GetMemory(char* p)//str�Դ�ֵ����ʽ����p
//{
//	p = (char*)malloc(100);//p���βΣ�һ�������ͱ�����
//}
////�������غ󣻶�̬�ڴ�δ�ͷţ������޷��ҵ���������ڴ��й¶
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);//str�����ǿ�ָ��
//	strcpy(str, "hello world");//�Կ�ָ������ã�Խ����ʣ��������
//	printf(str);
//}
////����ַ��������
//void GetMemory(char** p)//str�Դ���ַ����ʽ����p
//{
//	*p = (char*)malloc(100);//p���βΣ�һ�������ͱ�����
//
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);//str�ǵ�ַ
//	strcpy(str, "hello world");//�Զ�̬�ڴ��׵�ַ�������
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
////ͨ��������������
//char* GetMemory(char* p)//str�Դ�ֵ����ʽ����p
//{
//	p = (char*)malloc(100);//p���βΣ�һ�������ͱ�����
//	return p;//���ض�̬�ڴ�ĵ�ַ
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);//str�ǵ�ַ
//	strcpy(str, "hello world");//�Զ�̬�ڴ��׵�ַ�������
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

