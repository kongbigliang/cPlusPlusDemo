#include<cstdio>
using namespace std;
int main()
{
	int n, tmp;
	double sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &tmp);
		if (tmp <= 18)
		{
			sum1 += 1;
		}
		else if (tmp >= 19 && tmp <= 35)
		{
			sum2 += 1;
		}
		else if (tmp >= 36 && tmp <= 60)
		{
			sum3 += 1;
		}
		else if (tmp >= 61)
		{
			sum4 += 1;
		}
	}
	printf("%.2lf%c\n", sum1 * 100.0 / n, '%');
	printf("%.2lf%c\n", sum2 * 100.0 / n, '%');
	printf("%.2lf%c\n", sum3 * 100.0 / n, '%');
	printf("%.2lf%c\n", sum4 * 100.0 / n, '%');
	return 0;
}
