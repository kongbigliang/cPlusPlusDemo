#include<cstdio>
using namespace std;
int main()
{
	int n, m, max = 0, result;
	for (int i = 1; i <= 7; i++)
	{
		scanf("%d %d", &n, &m);
		if (n + m > max)
		{
			max = n + m;
			result = i;
		}
	}
	printf("%d", result);
	return 0;
}
