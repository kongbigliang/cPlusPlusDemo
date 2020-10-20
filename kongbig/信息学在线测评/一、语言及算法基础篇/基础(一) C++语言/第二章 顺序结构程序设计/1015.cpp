#include<cstdio>
using namespace std;
int main()
{
	float r1, r2, r;
	scanf("%f %f", &r1, &r2);
	r = 1 / (1 / r1 + 1 / r2);
	printf("%.2f", r);
	return 0;
}
