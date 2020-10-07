// 头 
#include<cstdio>
// 标准命名空间 
using namespace std;
// 主函数 
int main()
{
	// 声明输入、输出变量 
	float a,b;
	float c;
	// 输入 
	scanf("%f %f", &a, &b);
	// 运算 
	c = b / a * 100;
	// 输出 
	printf("%.3f%c",c,'%'); 
	return 0;
} 
