#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				// ×ö±ê¼Ç 
				a[j] = -1;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] != -1)
		{
			printf("%d ", a[i]);	
		}	
	} 
	return 0;
}
