#include<cstdio>
using namespace std;
int main()
{
	int n, in, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &in);
		sum += in;
	}
	printf("%d %.5f", sum, (float) sum / n);
	return 0;
}
