/*
scanfʹ��������������������ָ��������� 
*/
#include<cstdio>
using namespace std;
int main()
{
	// �������������ָ�룬*pa = a��������һ��pa = a��
	int a[5], i, *pa = a;
	for (i = 0; i < 5; i++)
		// ����д��pa + i��&a[i] 
		scanf("%d", a + i);
	for (i = 0; i < 5; i++)
		// ָ��������飬��д��*(pa + i)��pa[i]��a[i] 
		printf("a[%d] = %d\n", i, *(a + i));
	return 0;
}
