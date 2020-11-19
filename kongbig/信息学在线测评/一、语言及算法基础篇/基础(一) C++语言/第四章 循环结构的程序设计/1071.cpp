#include<cstdio>
using namespace std;
int main()
{
	int a1 = 1, a2 = 1, an, k;
	scanf("%d", &k);
	if (k <= 2 && k >= 1)
	{
		printf("%d", 1);
	}
	else
	{
		for (int i = 3; i <= k; i++)
		{
			an = a1 + a2;
			a1 = a2;
			a2 = an;
		}
		printf("%d", an);
	}
	return 0;
}
