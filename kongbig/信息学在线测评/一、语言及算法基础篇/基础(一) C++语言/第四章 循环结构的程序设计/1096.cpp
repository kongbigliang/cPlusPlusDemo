#include<cstdio>
using namespace std;
int main()
{
	int n, m, count = 0;
	scanf("%d %d", &n, &m);
	for (int i = n; i <= m; i++)
	{
		int x = i;
		while (x != 0)
		{
			// ��2�ͼ�1������ͼ�0 
			count += x % 10 == 2 ? 1 : 0;
			x /= 10;
		}
	}
	printf("%d", count);
	return 0;
}
