#include<cstdio>
using namespace std;
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int tmp = 1;
		// ´¦Àí½×³Ë 
		for (int j = 1; j <= i; j++)
		{
			tmp *= j;
		}
		sum += tmp;
	}
	printf("%d", sum);
	return 0;
}
