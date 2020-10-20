#include<cstdio>
const double PI = 3.14159;
using namespace std;
int main()
{
	double r, d, c, s;
	scanf("%lf", &r);
	d = 2 * r;
	c = 2 * PI * r; 
	s = PI * r * r;
	printf("%.4f %.4f %.4f", d, c, s);
	return 0;
}
