#include<cstdio>
using namespace std;
int main()
{
	int n, x, y;
	scanf("%d %d %d", &n, &x, &y);
	// xСʱ1��ƻ����yСʱ���ж��ٸ�������ƻ��
	if(y / x > n) 
	{
		printf("%d", 0);
	}
	else if(y % x == 0)
	{
		printf("%d", n - y / x);
	}
	else 
	{
		printf("%d", n - y / x - 1);
	}
	return 0;
}
