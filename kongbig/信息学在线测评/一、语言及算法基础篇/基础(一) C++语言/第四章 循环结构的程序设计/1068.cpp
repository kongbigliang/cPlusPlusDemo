#include<cstdio>
using namespace std;
int main()
{
	int x, n;
	float r;
	scanf("%d %d", &x, &n);
	r = (float) x;
	for (int i = 1; i <= n; i++)
	{
		r = r * (1 + 0.001);
	}
	printf("%.4f", r);
	return 0;
}
