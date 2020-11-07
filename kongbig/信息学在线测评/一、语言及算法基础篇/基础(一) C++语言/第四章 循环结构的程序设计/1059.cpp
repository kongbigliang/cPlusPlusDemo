#include<cstdio>
using namespace std;
int main()
{
	int n, in;
	double sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &in);
		sum += in;
	}
	printf("%.2f", sum / n);
	return 0;
}
