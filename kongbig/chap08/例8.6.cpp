/*
b[i] = a[1] + a[2] + ... + a[i]����b[i]��a��i��Ԫ�صĺ� 
*/
#include<cstdio>
using namespace std;
int n;
// ����ָ�����a������ֱ�ӵ�������ʹ�� 
int *a; 
int main()
{
	scanf("%d", &n);
	// �����ϵͳ������������n + 1��int�͵Ŀռ� 
	a = new int[n + 1];
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	for (int i = 2; i <= n; i++)
		a[i] += a[i - 1];
	for (int i = 1; i <= n; i++)
		printf("%d ", a[i]);
	return 0; 
} 
