/*
putchar��������ַ� 
*/ 
#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	char c = 'B';
	putchar(c);
	// ת���ַ������ĸ'B' 
	putchar('\x42');
	// 16����ASCII�����'B' 
	putchar(0x42);
	// 10����ASCII�����'B' 
	putchar(66); 
}
