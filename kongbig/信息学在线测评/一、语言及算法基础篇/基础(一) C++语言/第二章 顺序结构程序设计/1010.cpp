#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	double x;
	scanf("%d %d", &a, &b);
	x = (double) a / (double) b;
	printf("%.9lf", x);
	return 0;
}
