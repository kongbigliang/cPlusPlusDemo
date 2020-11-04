#include<cstdio>
using namespace std;
int main()
{
	int n;
	double sum = 1.0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		double tmp = 1;
		// ´¦Àí½×³Ë 
		for (int j = 1; j <= i; j++)
		{
			tmp *= j;
		}
		sum += 1.0 / tmp;
	}
	printf("%.10lf", sum);
	return 0;
}
