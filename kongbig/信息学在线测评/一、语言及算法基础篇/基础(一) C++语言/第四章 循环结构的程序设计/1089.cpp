#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	int n, a[10], temp = 0, sum = 0;
	scanf("%d", &n);
	if(n == 0)
	{
		printf("%d", 0);
		return 0;
	}
	if (n < 0)
	{
		printf("-");
		n = 0 - n;
	}
	while (true)
	{
		if (n == 0)
		{
			break;
		}
		// 反转 
		a[temp] = n % 10;
		n /= 10;
		temp += 1;
	}
	for (int i = 0; i < temp; i++)
	{
		// 依次 次方相加 
		sum += (int) pow(10, temp - i - 1) * a[i];
	}
	printf("%d", sum);
	return 0;
}
