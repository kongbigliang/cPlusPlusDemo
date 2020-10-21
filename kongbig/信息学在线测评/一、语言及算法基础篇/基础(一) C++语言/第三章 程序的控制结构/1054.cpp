#include<cstdio>
using namespace std;
int main()
{
	// 三角形“两边之和大于第三边，两边之差小于第三边”
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	if (x + y > z && x + z > y && y + z > x)
	{
		printf("%s", "yes");
	}
	else
	{
		printf("%s", "no");
	}
	return 0;
}
