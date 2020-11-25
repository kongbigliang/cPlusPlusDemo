#include<cstdio>
using namespace std;
int a[101], n;
int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	// 定义指针变量int *p，初始化为数组开始元素的地址，即a[1] 
	int *p = &a[1];
	for (int i = 1; i <= n; i++)
	{
		printf("%d", *p);
		// p指向下一个数 
		p++;
	}
	return 0;
} 
