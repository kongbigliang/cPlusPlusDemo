#include<cstdio>
using namespace std;
int main()
{
	int n, count = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int x = i;
		while (x != 0)
		{
			// 余1就加1，否则就加0 
			count += x % 10 == 1 ? 1 : 0;
			x /= 10;
		}
	}
	printf("%d", count);
	return 0;
}
