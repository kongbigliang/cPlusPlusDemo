#include<cstdio>
using namespace std;
int main()
{
	int n, max = -1000000, sum = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		max = max > a[i] ? max : a[i];
	}
	for (int i = 0; i < n; i++)
	{
		sum += max == a[i] ? 0 : a[i];
	}
	printf("%d", sum);
	return 0;
} 
