#include<cstdio>
using namespace std;
int main()
{
	int k, n = 1;
	double sn = 0;
	scanf("%d", &k);
	while (true)
	{
		sn += 1.0 / n;
		if (sn > k)
		{
			break;
		}
		n+=1;
	}
	printf("%d", n);
	return 0;
}
