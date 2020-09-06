/*
给定3个整数a、b、c，计算表达式(a + b) / c的值，/是整除运算 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a,b,c,result;
	printf("请输入整数a,b,c，以空格分开：");
	scanf("%d %d %d", &a, &b, &c);
	result = (a + b) / c;
	printf("(a + b) / c结果为：%d", result);
	return 0;
}
 
