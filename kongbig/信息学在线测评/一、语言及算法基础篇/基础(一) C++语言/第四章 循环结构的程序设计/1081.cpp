#include<cstdio>
using namespace std;
int main()
{
	// 人数 
	int n, sum = 0;
	scanf("%d", &n);
	// 每个人的苹果数不一样，至少需要多少个 
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
