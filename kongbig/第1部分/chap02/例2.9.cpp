/*
putchar函数输出字符 
*/ 
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char c = 'B';
	putchar(c);
	// 转义字符输出字母'B' 
	putchar('\x42');
	// 16进制ASCII码输出'B' 
	putchar(0x42);
	// 10进制ASCII码输出'B' 
	putchar(66); 
}
