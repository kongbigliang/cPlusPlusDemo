#include<cstdio>
using namespace std;
int main()
{
	// 等差数列求末项：an=a1+(n-1)d
	int a1, a2, n;
	scanf("%d %d %d", &a1, &a2, &n);
	printf("%d", a1 + (n - 1) * (a2 - a1));	
	return 0; 
}
