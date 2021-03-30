#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	char a[n][20];
	for (int i = 0; i < n; i++)
	{
		scanf("%s", &a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		printf("%c", a[i][0] >= 'a' && a[i][0] <= 'z' ? a[i][0] - 32 : a[i][0]);
		int len = strlen(a[i]);
		for (int j = 1; j < len; j++)
		{
			printf("%c", a[i][j] >= 'A' && a[i][j] <= 'Z' ? a[i][j] + 32 : a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
