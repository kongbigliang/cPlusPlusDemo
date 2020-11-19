#include<cstdio>
#include<cmath>
using namespace std;
bool isZhiShu (int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			// 不符合只被1和本身整除 
			return false;
		}
	}
	return true;
}
int main()
{
	int n, z = 1;
	scanf("%d", &n);
	// n = 10
	// 2、3、5、7、11、13、17、19、23、29 
	for (int i = 1; i <= n; )
	{
		z += 1;
		if (isZhiShu(z))
		{
			i++;
		}
	}
	printf("%d", z);
	return 0;
}
