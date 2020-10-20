#include<cstdio>
using namespace std;
int main()
{
	double x, a, b, c, d, fx;
	scanf("%lf %lf %lf %lf %lf", &x, &a, &b, &c, &d);
	fx = a * x * x * x + b * x * x + c * x + d;
	printf("%.7lf", fx);
	return 0;
} 
