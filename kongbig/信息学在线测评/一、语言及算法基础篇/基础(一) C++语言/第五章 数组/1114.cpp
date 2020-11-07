#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n, ma, mi;
	scanf("%d", &n);
	double a[n], max = 0, min = 999, maxAbs = 0, sum = 0;
	for (int i = 0; i < n; i++)
	{
		scanf("%lf", &a[i]);
		if (a[i] > max)
		{
			max = a[i];
			ma = i; 
		}
		if (a[i] < min)
		{
			min = a[i];
			mi = i;
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (i != ma && i != mi)
		{
			sum += a[i];
		}
	}
	// ma = mi 的话，证明是3个相等的数 
	double avg = ma == mi ? sum / (n - 1) : sum / (n - 2);
	for (int i = 0; i < n; i++)
	{
		if (i != ma && i != mi)
		{
			double myAbs = fabs(a[i] - avg);
			maxAbs = maxAbs > myAbs ? maxAbs : myAbs;
		}
	}
	printf("%.2lf %.2lf", avg, maxAbs);
	return 0;
}
