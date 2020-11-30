/*
编写一个函数，用于在一个包含N个整数的数组种找到第一个质数，
若有则返回函数的地址，
否则返回NULL（空指针） 
*/
#include<cstdio>
#include<cmath>
using namespace std;
int n, a[10001];
// 判断n是不是素数
bool isPrime (int n)
{
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	for (int i = 2; i <= sqrt(n); i++)
		if (n % i == 0)
			return false;
		
	return true;	
}
int * find()
{
	for (int i = 1; i <= n; i++)
		if (isPrime(a[i]))
			return &a[i];
	return NULL;
}

int main()
{
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	int * p = find();
	if (p != NULL)
		// 输出这个素数的地址和它本身 
		printf("%d\n%d\n", p, * p);
	else
		printf("can't find!'");
	return 0;
}
