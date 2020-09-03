/*
给定两个整数A和B，输入A+B的值。
保证A、B及结果均在整数范围内。 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	printf("请输入两个整数，用空格分开：");
	scanf("%d %d", &a, &b);
	printf("A+B结果为：%d", a + b); 
	return 0;
}
