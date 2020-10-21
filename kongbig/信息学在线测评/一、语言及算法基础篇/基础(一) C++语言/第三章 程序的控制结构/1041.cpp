#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("%s", "even");
	}
	if (n % 2 != 0)
	{
		printf("%s", "odd");
	}
	return 0;
}
