#include<cstdio>
using namespace std;
int main()
{
	int n, x, y, z;
	scanf("%d", &n);
	x = n / 100;
	y = n / 10 % 10;
	z = n % 100 % 10; 
	printf("%d%d%d", z, y, x);
	return 0;
} 
