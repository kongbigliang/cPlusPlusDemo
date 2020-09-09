/*
浮点型数据类型的存储空间大小 
*/
#include<cstdio>
using namespace std;
int main()
{
	float x;
	double y;
	printf("单精度浮点型x的存储空间（字节）：%d\n", sizeof(x));
	printf("双精度浮点型y的存储空间（字节）：%d", sizeof(y));
	return 0;
}
