#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	switch (n)
	{
		case 1:
		case 3:
		case 5: printf("%s", "NO"); break;
		case 2:
		case 4:
		case 6:
		case 7: printf("%s", "YES"); break;
		default: printf("%s", "ÇëÊäÈë1-7µÄÊı×Ö"); break;
	}
	return 0;
}
