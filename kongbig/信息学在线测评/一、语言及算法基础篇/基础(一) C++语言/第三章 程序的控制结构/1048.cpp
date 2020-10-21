#include<cstdio>
using namespace std;
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	if ((n < 60 && m >= 60) || (n >= 60 && m < 60))
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}
	return 0;
}
