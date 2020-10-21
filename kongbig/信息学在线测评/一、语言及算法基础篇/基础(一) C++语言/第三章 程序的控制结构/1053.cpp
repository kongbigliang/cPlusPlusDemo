#include<cstdio>
using namespace std;
int main()
{
	int x, y, z, temp;
	scanf("%d %d %d", &x, &y, &z);
	temp = x > y ? x : y;
	printf("%d", temp > z ? temp : z);
	return 0;
}
