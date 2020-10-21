#include<cstdio>
using namespace std;
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x > y)
	{
		printf("%c", '>');
	}
	else if (x == y) 
	{
		printf("%c", '=');
	}
	else if (x < y)
	{
		printf("%c", '<');
	}
	return 0;
}
