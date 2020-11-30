/*
输入双精度浮点数
输出保留12位小数的浮点数 
*/
#include<cstdio>
using namespace std;
int main()
{
	printf("请输入双精度浮点数：\n");
	double d;
	scanf("%lf", &d);
	printf("%.12lf", d);
	return 0;
} 
