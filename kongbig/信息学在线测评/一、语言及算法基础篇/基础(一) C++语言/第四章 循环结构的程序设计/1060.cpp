#include<cstdio>
using namespace std;
int main()
{
	int n;
	float in, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%f", &in);
		sum += in;
	}
	printf("%.4f", sum / n);
	return 0;
}
