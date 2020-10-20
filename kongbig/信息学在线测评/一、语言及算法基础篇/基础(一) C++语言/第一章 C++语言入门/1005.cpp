#include<cstdio>
using namespace std;
int main()
{
	int x, a, y, b;
	double z;
	scanf("%d %d %d %d", &x, &a, &y, &b);
	z = (b * y - a * x) / (b - a);
	printf("%.2lf", z);
	return 0; 
}
