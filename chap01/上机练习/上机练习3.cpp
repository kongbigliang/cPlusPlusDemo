/*
读入三个整数，按每个整数占8个字符的宽度，右对齐输出它们。 
*/
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a, b, c;
	cin>> a >> b >> c;
	printf("%8d %8d %8d", a, b, c);
	return 0;
}
