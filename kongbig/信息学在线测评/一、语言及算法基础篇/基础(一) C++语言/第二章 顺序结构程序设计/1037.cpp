#include<cstdio>
using namespace std;
int main()
{
	int n, result = 1;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		result *= 2;
	}
	printf("%d", result);
	return 0;
}
