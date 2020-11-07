#include<cstdio>
using namespace std;
int main()
{
	int n, in, max = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &in);
		max = in > max ? in : max;	
	}
	printf("%d", max);
	return 0;
}
