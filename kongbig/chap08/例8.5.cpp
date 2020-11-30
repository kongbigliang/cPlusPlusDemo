/*
scanf使用数组名，用数组名或指针访问数组 
*/
#include<cstdio>
using namespace std;
int main()
{
	// 定义整型数组和指针，*pa = a可以在下一行pa = a；
	int a[5], i, *pa = a;
	for (i = 0; i < 5; i++)
		// 可以写成pa + i和&a[i] 
		scanf("%d", a + i);
	for (i = 0; i < 5; i++)
		// 指针访问数组，可写成*(pa + i)或pa[i]或a[i] 
		printf("a[%d] = %d\n", i, *(a + i));
	return 0;
}
