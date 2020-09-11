/*
读入单精度浮点数 
输出保留3位小数的浮点数 
*/
#include<cstdio>
using namespace std;
int main()
{
	float f;
	printf("请输入单精度浮点数：\n");
	scanf("%f", &f); 
	printf("%.3f", f);
	return 0;	
} 
