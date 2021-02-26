/*
斐波拉契数列解决爬楼梯问题。
n个台阶，一次可以上1级也可以上2级，问有多少种方法爬上顶。
如果这题没有数据规模约束，那么不要用递归做，时间上等不起！！！
分析一下：
	1级台阶只有一种方法 一次跨1级；
	2级台阶有2种方法，可以一次跨2阶，也可以分两次跨1阶；
	3级台阶1 1 1、1 2、2 1，3种方法；
	4级台阶5种，5级8种，明显就是一个兔子繁殖的问题(又称斐波那契数列)，直接用递归就行了 （数据规模约束：N<=30，N>=1） 
*/
#include<cstdio>
using namespace std;
int fi(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;

	return fi(n - 1) + fi(n - 2);
}

int dp(int n)
{
	if (n <= 2)
		return n;
	int firstStep = 1;
	int secondStep = 2;
	for (int i = 3; i <= n; i++)
	{
		int temp = firstStep + secondStep;
		firstStep = secondStep;
		secondStep = temp;
	}
	return secondStep;
}

int main()
{
	int n;
    scanf("%d", &n);
    // 斐波拉契递归处理
    printf("递归处理: %d\n", fi(n));
    printf("遍历处理: %d\n", dp(n));
}
