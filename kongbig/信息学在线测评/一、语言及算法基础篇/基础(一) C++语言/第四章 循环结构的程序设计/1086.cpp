#include<cstdio>
using namespace std;
int main()
{
	int n, temp;
	scanf("%d", &n);
	while(true)
	{
		if (n % 2 != 0)
		{
			temp = n * 3 + 1;
			printf("%d*3+1=%d\n", n, temp);
		}
		else
		{
			temp = n / 2;
			printf("%d/2=%d\n", n, temp);
		}
		n = temp;
		if(n == 1)
		{
			printf("End");
			break;
		}
	}
}
