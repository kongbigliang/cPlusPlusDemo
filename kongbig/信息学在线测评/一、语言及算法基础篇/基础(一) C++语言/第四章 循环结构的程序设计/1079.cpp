#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		sum += (pow(-1.0, (n - 1)) * 1 / n);
		printf("%.4lf\n", sum);
	}
	
	return 0;
}
