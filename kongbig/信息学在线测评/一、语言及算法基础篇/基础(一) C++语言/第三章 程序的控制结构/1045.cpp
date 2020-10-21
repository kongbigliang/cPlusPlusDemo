#include<cstdio>
using namespace std;
int main()
{
	// 10个幸运或20个鼓励可以换神秘大奖
	int n, m;
	scanf("%d %d", &n, &m);
	if (n >= 10 || m >= 20)
	{
		printf("%d", 1);	
	}
	else
	{
		printf("%d", 0);
	}
	return 0;
}
