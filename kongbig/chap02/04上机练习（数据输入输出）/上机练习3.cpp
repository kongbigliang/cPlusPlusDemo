/*
输入：1个字符、1个单精度浮点数、1个双精度浮点数
输出：按顺序输出他们，以空格分隔，浮点数保留6位小数 
*/
#include<cstdio>
using namespace std;
int main()
{
	printf("请输入1个字符、1个单精度浮点数、1个双精度浮点数：\n");
	char c;
	float f;
	double d;
	scanf("%c %f %lf", &c, &f, &d);
	printf("%c %.6f %.6lf", c, f, d);
	return 0; 
}
