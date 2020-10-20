#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	double x;
	scanf("%d %d", &a, &b);
	x = (double) b / (double) a * 100;
	printf("%.3lf%c", x, '%');
	return 0;
}
