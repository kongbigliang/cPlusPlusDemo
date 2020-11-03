#include<cstdio>
using namespace std;
int main()
{
	int a, b, c, x = 2;
	scanf("%d %d %d", &a, &b, &c);
	while (true)
	{
		int ax = a % x;
		int bx = b % x;
		int cx = c % x;
		if (ax == bx && bx == cx)
		{
			break;
		}
		else
		{
			x+=1;
		}
	}
	printf("%d", x);
	return 0;
}
