#include<cstdio>
using namespace std;
int main()
{
	double f, c;
	scanf("%lf", &f);
	c = 5 * (f - 32) / 9;
	printf("%.5f", c);
	return 0;
}
