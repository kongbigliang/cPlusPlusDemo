#include<cstdio>
using namespace std;
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	int a[n], b[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		sum += a[i] * b[i];
	}
	printf("%d", sum);
	return 0;
}
