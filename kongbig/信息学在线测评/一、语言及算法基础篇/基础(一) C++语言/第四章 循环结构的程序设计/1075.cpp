#include<cstdio>
using namespace std;
int main()
{
	int m, n, in, out = 0;
	scanf("%d", &m);
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &in);
		if (m - in >= 0)
		{
			m -= in;
		}
		else
		{
			out++;
			continue;
		}
	}
	printf("%d", out);
	return 0;
} 
