#include<cstdio>
using namespace std;
int main()
{
	int n, j, y, t, sum1 = 0, sum2 = 0, sum3 = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d %d", &j, &y, &t);
		sum1 += j;
		sum2 += y; 
		sum3 += t;
	}
	printf("%d %d %d %d", sum1, sum2, sum3, sum1 + sum2 + sum3);
	return 0;
}

