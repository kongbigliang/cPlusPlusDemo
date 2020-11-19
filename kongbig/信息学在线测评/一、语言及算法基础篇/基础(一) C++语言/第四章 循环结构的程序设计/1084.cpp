#include<cstdio>
using namespace std;
int main()
{
	int a, b, sum = 1;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		sum *= a;
		// 跟全部乘完以后再取余一样 
		sum %= 1000;
	}
	if (sum < 10)
	{
		printf("%s%d", "00", sum);
	}
	else if (sum < 100)
	{
		printf("%d%d", 0, sum);
	}
	else
	{
		printf("%d", sum);
	}
	return 0;
}
