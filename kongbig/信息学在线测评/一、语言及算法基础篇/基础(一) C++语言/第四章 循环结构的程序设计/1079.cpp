#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	int i, n;
	float a, sum=0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		a = pow(-1, i+1);
		sum += 1 / (a * i);
	}
	printf("%.4f", sum);
	return 0;
}
