#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
			{
				printf("%d ", a[i][j]);
				continue;
			}
			int result = round((a[i - 1][j] + a[i][j - 1] + a[i][j + 1] + a[i + 1][j] + a[i][j]) / 5.0); 
			printf("%d ", result);
		}
		printf("\n");
	}	
	return 0;
}
