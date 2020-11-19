#include<cstdio>
using namespace std;
int main()
{
	int n;
	double a = 1, b = 1, temp, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		temp = a;
		a = b;
		b = temp + b;
		sum += (b / a);
	}
	printf("%.4lf", sum);
	return 0;
}
