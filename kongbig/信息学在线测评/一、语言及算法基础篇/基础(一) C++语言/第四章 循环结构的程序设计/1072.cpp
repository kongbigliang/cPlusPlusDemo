#include<cstdio>
using namespace std;
int main()
{
	int n, j, k;
	double x, y; 
	scanf("%d", &n);
	int a[n][2];
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &j, &k);
		a[i][0] = j;
		a[i][1] = k;
	}
	// 计算鸡尾酒疗法
	x = 1.0 * a[0][1] / a[0][0];
	// 比较
	for (int i = 1; i < n; i++)
	{
		y = 1.0 * a[i][1] / a[i][0];
		if (y - x > 0.05)
		{
			printf("%s\n", "better");
		}
		else if (x - y > 0.05)
		{
			printf("%s\n", "worse");
		}
		else
		{
			printf("%s\n", "same");
		}
	}
	return 0;
}
