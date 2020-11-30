/*
b[i] = a[1] + a[2] + ... + a[i]，即b[i]是a的i个元素的和 
*/
#include<cstdio>
using namespace std;
int n;
// 定义指针变量a，后面直接当数组名使用 
int *a; 
int main()
{
	scanf("%d", &n);
	// 向操作系统申请了连续的n + 1个int型的空间 
	a = new int[n + 1];
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 2; i <= n; i++)
		a[i] += a[i - 1];
	for (int i = 1; i <= n; i++)
		printf("%d ", a[i]);
	return 0; 
} 
