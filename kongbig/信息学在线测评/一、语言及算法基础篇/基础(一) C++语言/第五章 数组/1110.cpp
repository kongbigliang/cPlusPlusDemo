#include<cstdio>
using namespace std;
int main()
{
	int n, m;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++)
	{
		if (a[i] == m)
		{
			printf("%d", i + 1);
			return 0;	
		} 
	}
	printf("%d", -1);
	return 0;
}
