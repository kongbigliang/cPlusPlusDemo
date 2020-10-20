#include<cstdio>
using namespace std;
int main()
{
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	// x小时1个苹果，y小时后还有多少个完整的苹果
	if(y / x > n) 
	{
		printf("%d", 0);
	}
	else if(y % x == 0)
	{
		printf("%d", n - y / x);
	}
	else 
	{
		printf("%d", n - y / x - 1);
	}
	return 0;
}
