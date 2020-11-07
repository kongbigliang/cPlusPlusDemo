#include<cstdio>
using namespace std;
int main()
{
	int n, x, y, temp = 0, max = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d %d", &x, &y);
		if (x >= 90 && x <= 140 && y >= 60 && y <= 90)
		{
			temp++;
		}
		else
		{
			temp = 0;
		}
		max = temp > max ? temp : max;
	}
	printf("%d", max);
	return 0;
}
