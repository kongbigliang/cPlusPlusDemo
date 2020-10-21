#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	if (n > 0)
	{
		printf("%s", "positive");
	}
	else if (n == 0)
	{
		printf("%s", "zero");
	}
	else 
	{
		printf("%s", "negative");
	}
	return 0;	
} 
