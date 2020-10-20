#include<cstdio>
using namespace std;
int main()
{
	char c;
	int d;
	float f;
	double lf;
	scanf("%c\n%d\n%f\n%lf", &c, &d, &f, &lf);
	printf("%c %d %.6f %.6lf", c, d, f, lf);
	return 0;
}
