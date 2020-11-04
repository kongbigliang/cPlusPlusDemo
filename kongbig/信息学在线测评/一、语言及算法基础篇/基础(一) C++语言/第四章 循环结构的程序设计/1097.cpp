#include<cstdio>
using namespace std;
int main()
{
	// h w相当于y, x坐标 
	int h, w, a;
	char c;
	scanf("%d %d %c %d", &h, &w, &c, &a);
	for (int i = 1; i <= h; i++)
	{
		for (int j = 1; j <= w; j++)
		{
			if (i == 1 || i == h || j == 1 || j == w)
			{
				printf("%c", c);
			}
			else
			{
				if (a == 1)
				{
					printf("%c", c);
				}
				else if (a == 0)
				{
					printf("%c", ' ');
				} 
			}
		}
		printf("\n");
	}
	return 0;
}
