#include<cstdio>
using namespace std;
int main()
{
	int n, in, max = 1, min = 1000;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &in);
		max = in > max ? in : max;
		min = in < min ? in : min;
	}
	printf("%d", max - min);
	return 0;
}
