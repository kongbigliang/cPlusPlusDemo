#include<cstdio>
using namespace std;
const double PI = 3.14;
int main()
{
	// v = 4/3 * Π* r ^ 3
	double r, v;
	scanf("%lf", &r);
	// 用4.0才不会损失精度 
	v = 4.0 / 3 * PI * r * r * r;
	printf("%.2lf", v);
	return 0; 
}
