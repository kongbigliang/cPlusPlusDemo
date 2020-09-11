/*
读入一个双精度浮点数
分别按如下格式输出：
%f（保留5位小数）、%e、%g 
*/
#include<cstdio>
using namespace std;
int main()
{
	printf("输入一个双精度浮点数：\n");
	double d;
	scanf("%lf", &d);
	printf("%.5f\n", d);
	printf("%e\n", d);
	printf("%g\n", d);
	return 0;	 
}
