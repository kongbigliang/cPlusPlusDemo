#include<cstdio>
using namespace std;
int main()
{
	int n, max = 0;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		max = max > a[i] ? max : a[i];
	}
	for (int i = 0; i <= max; i++)
	{
		int sum = 0;
		for (int j = 0; j < n; j++)
		{
			sum += (i == a[j] ? 1 : 0);
		}
		printf("%d\n", sum);
	}
	return 0;
}
