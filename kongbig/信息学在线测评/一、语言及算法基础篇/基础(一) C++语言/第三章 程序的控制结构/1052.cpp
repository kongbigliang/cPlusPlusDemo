#include<cstdio>
using namespace std;
int main()
{
	// <=1000，8元
	// >1000，每500，4元
	// 加急，5元
	int n;
	char c;
	scanf("%d %c", &n, &c);
	if (n <= 1000)
	{
		printf("%d", (c == 'y') ? 8 + 5 : 8);
	}
	else if (n > 1000)
	{
		int x;
		if ((n - 1000) % 500 == 0)
		{
			x = (n - 1000) / 500;
		}
		else
		{
			// 有不足500部分
			x = (n - 1000) / 500 + 1;
		}
		printf("%d", (c == 'y') ? 8 + x * 4 + 5 : 8 + x * 4);
	}
	else
	{
		printf("%s", "输入有误");
	}
	return 0;
}
