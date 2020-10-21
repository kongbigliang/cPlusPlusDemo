#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n % 3 == 0 && n % 5 == 0)
	{
		printf("%s", "YES"); 
	}
	else
	{
		printf("%s", "NO");
	}
	return 0;
}
