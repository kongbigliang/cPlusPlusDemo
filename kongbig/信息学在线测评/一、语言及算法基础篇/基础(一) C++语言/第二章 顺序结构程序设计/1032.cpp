#include<cstdio>
const double PI = 3.1415926;
using namespace std;
int main()
{
	int h, r, v, sum = 20 * 1000;
	scanf("%d %d", &h, &r);
	v = PI * r * r * h;
	if (sum % v == 0)
	{
		printf("%d", sum / v);
	}
	else 
	{
		printf("%d", sum / v + 1);
	}
	return 0;
} 
