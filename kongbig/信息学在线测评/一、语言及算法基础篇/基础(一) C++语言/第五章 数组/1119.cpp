#include<cstdio>
using namespace std;
int main()
{
	// r––c¡– 
	int n, m, a[5][5], len = 5;
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			scanf("%d", &a[i][j]);	
		}	
	}
	scanf("%d %d", &n, &m);
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (i + 1 == n)
			{
				printf("%d ", a[m - 1][j]);
			}
			else if (i + 1 == m)
			{
				printf("%d ", a[n - 1][j]);
			}
			else
			{
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
