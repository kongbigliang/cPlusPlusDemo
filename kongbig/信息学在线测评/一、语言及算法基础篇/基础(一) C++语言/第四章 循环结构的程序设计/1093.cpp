#include<cstdio>
using namespace std;
int main()
{
	double x, sum = 1.0;
	int n;
	scanf("%lf %d", &x, &n);
	for (int i = 1; i <= n; i++)
	{
		double tmp;
		for (int j = 1; j <= i; j++)
		{
			tmp = j == 1 ? x : tmp * x;
		}
		sum += tmp;
	}
	printf("%.2lf", sum);
	return 0;
}
