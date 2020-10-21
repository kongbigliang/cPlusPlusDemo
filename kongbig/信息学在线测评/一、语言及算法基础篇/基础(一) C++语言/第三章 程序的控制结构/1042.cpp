#include<cstdio>
using namespace std;
int main()
{
	char c;
	int d;
	scanf("%c", &c);
	d = c;
	if (d % 2 == 0)
	{
		printf("%s", "NO");
	}
	if (d % 2 != 0)
	{
		printf("%s", "YES");
	}
	return 0;
}
