/*
两个整数a和b分别作为分子和分母，即分数a / b，求它的浮点数值（双精度浮点数，保留小数点后9位） 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	double result;
	printf("请输入整数a,b，以空格分开：");
	scanf("%d %d", &a, &b);
	result = a / b;
	printf("a / b结果为：%.9lf", result);
	return 0; 
} 
