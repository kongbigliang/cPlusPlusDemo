/*
其它数据类型的存储空间大小 
*/
#include<cstdio>
using namespace std;
int main()
{
	char x;
	short y;
	unsigned int a;
	long int b;
	printf("char型x的存储空间（字节）：%d\n", sizeof(x));
	printf("short型y的存储空间（字节）：%d\n", sizeof(y));
	printf("unsigned int型a的存储空间（字节）：%d\n", sizeof(a));
	printf("long int型b的存储空间（字节）：%d", sizeof(b));
	return 0;
}
