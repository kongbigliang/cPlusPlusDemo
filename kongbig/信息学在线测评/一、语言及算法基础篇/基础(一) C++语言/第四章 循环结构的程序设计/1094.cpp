#include<cstdio>
using namespace std;
int main()
{
	int n, sum = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		bool flag = true;
		int x = i;
		if(i %7 != 0)
		{
			for ( ; x != 0; )
			{
				if (x % 10 == 7)
				{
					// ����һλ��Ϊ7��flag=false 
					flag = false;
					break;
				}
				x /= 10;
			}
			sum += flag ? i * i : 0;			
		}
	}
	printf("%d", sum);
	return 0;
}
