#include<cstdio>
using namespace std;
int main()
{
	// ���� 
	int n, sum = 0;
	scanf("%d", &n);
	// ÿ���˵�ƻ������һ����������Ҫ���ٸ� 
	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);
	return 0;
}
