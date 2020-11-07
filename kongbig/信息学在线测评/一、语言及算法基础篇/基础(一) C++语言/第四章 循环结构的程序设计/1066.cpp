#include<cstdio>
using namespace std;
int main()
{
	int m, n, sum = 0;
	scanf("%d %d", &m, &n);
	for (int i = m; i <= n; i++)
	{
		sum += (i % 17 == 0 ? i : 0);
	}
	printf("%d", sum);
	return 0;
}
