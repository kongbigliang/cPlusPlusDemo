#include<cstdio>
using namespace std;
int main()
{
	int m, n, sum = 0;
	scanf("%d %d", &m, &n);
	int a[m][n], b[m][n];
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);	
		}	
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &b[i][j]);	
		}	
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[i][j] == b[i][j])
			{
				sum++;	
			}	
		}	
	}
	printf("%.2lf", 1.0 * 100 * sum / (m * n));
} 
