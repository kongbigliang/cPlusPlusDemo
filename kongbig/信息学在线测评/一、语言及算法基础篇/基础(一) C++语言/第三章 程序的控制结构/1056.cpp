#include<cstdio>
using namespace std;
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (x >= -1 && x <= 1 && y >= -1 && y <= 1) 
	{
		printf("%s", "yes");
	}
	else
	{
		printf("%s", "no");
	}
	return 0;
}
