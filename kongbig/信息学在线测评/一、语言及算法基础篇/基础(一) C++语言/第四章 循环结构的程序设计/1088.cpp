#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	while (true)
	{
		printf("%d ", n % 10);
		n /= 10;
		if(n == 0)
		{
			break;
		}
	}
	return 0;
}
