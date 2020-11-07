#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, m;
	double s = 0, sum = 0, x, y, p;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%lf %lf %lf", &x, &y, &p);
		// 一来一回 
		s = 2 * sqrt((x - 0) * (x - 0) + (y- 0) * (y - 0));
		sum += (s / 50.0 + p * 1.5);
	}
	m = ceil(sum);
	printf("%d", m);
	return 0;
}
