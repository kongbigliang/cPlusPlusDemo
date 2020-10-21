#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	// 能被 4 整除的大多是闰年，
	// 但能被 100 整除 而不能被 400 整除的年份不是闰年
	if (n % 4 != 0 || (n % 100 == 0 && n % 400 != 0))
	{
		printf("%c", 'N');
	}
	else
	{
		printf("%c", 'Y');
	}
	return 0;
}
