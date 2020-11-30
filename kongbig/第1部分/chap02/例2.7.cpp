/*
大小写字母转换 

大小写字母ASCII表关系如下：
大 + 32 = 小
*/
#include<cstdio> 
using namespace std;
int main()
{
	char c1 = 'a', c2 = 'A';
	c1 = c1 - 32;
	c2 = c2 + 32;
	printf("a转为：%c\n", c1);
	printf("A转为：%c", c2);
}
