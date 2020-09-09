/*
分别定义int，short类型变量各一个，并依次输出它们的存储空间大小（单位：字节） 
*/ 
#include<cstdio>
using namespace std;
int main()
{
	int x;
	short y;
	printf("输入x、y，以空格分开\n");
	scanf("%d %d", &x, &y);
	// sizeof返回一个对象或者类型所占的内存字节数 
	printf("变量x所占字节数：%d\n", sizeof(x)); 
	printf("变量y所占字节数：%d", sizeof(y)); 
	return 0;
} 
