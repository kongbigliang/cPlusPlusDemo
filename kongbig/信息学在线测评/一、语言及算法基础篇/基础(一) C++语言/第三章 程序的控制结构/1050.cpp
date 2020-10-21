#include<cstdio>
using namespace std;
int main()
{
	// 开锁并骑上自行车27秒；
	// 停车锁车23秒；
	// 步行每秒走1.2米
	// 骑车每秒走3.0米
	// 骑车快 输出Bike
	// 走路快 输出Walk
	// 一样快 输出All
	int n;
	float b, w;
	scanf("%d", &n);
	b = n / 3.0 + 23 + 27;
	w = n / 1.2;
	if (b < w)
	{
		printf("%s", "Bike");
	}
	else if (b > w)
	{
		printf("%s", "Walk");	
	}
	else if (b == w)
	{
		printf("%s", "All");
	}
	return 0;
}
