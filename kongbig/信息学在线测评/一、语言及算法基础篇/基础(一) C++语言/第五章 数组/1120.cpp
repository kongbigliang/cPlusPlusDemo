#include<cstdio>
using namespace std;
int main()
{
	int n, i, j;
	scanf("%d %d %d", &n, &i, &j);
	for (int x = 1; x <= n; x++)
	{
		
		printf("(%d,%d) ", i, x);
	}
	printf("\n"); 
	for (int x = 1; x <= n; x++)
	{

		printf("(%d,%d) ", x, j);
	}
	printf("\n"); 
	for (int x = 1; x <= n; x++)
	{
		for (int y = 1; y <= n; y ++)
		{
			// ���ϵ����� 
			if (i - x == j - y)
			{
				printf("(%d,%d) ", x, y);
			}
		}
	}
	printf("\n"); 
	for (int x = n; x >= 1; x--)
	{
		for (int y = 1; y <= n; y ++)
		{
			// ���ϵ����� 
			if (i - x == - (j - y))
			{
				printf("(%d,%d) ", x, y);
			}
		}
	}
	return 0;
}
