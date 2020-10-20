#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double xa, ya, xb, yb, len;
	// a的坐标 
	scanf("%lf %lf\n", &xa, &ya);
	// b的坐标 
	scanf("%lf %lf", &xb, &yb);
	len = sqrt(pow((yb - ya), 2) + pow((xb - xa), 2));
	printf("%.3f", len);
	return 0;
}
