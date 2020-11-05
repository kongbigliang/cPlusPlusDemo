#include<cstdio>
using namespace std;
int main()
{
	int n, m, count = 0;
	scanf("%d", &n);
	// 这定义一定要放在输入n之后 
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < n; i++)
	{
		count += a[i] == m ? 1 : 0;
	}
	printf("%d", count);
	return 0;
}
