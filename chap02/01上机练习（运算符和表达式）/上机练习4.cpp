/*
10 / 3 = 3 ...... 1 
被除数 / 除数 = 商 ...... 余数 
 
给定被除数和除数，求整数商及余数 
*/
#include<cstdio>
int main()
{
	int a, b, r1, r2;
	printf("请输入被除数a,除数b，以空格分开：");
	scanf("%d %d", &a, &b);
	// 商
	r1 = a / b;
	// 余数
	r2 = a % b;
	printf("商为：%d\t余数为：%d", r1, r2); 
} 
