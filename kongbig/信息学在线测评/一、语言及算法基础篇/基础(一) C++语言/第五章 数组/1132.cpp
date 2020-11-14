#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	// 声明二维数组，100行20列 
	char a[100][20], b[100][20];
	for (int i= 0; i < n; i++)
	{
		scanf("%s %s", &a[i], &b[i]);
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i][0] == 'R')
		{
			if (b[i][0] == 'R') 
				printf("Tie\n");
			else if (b[i][0] == 'S')
				printf("Player1\n");
			else if (b[i][0] == 'P')
				printf("Player2\n");
		}
		else if (a[i][0] == 'S')
		{
			if (b[i][0] == 'S') 
				printf("Tie\n");
			else if (b[i][0] == 'P')
				printf("Player1\n");
			else if (b[i][0] == 'R')
				printf("Player2\n");
		}
		else if (a[i][0] == 'P')
		{
			if (b[i][0] == 'P') 
				printf("Tie\n");
			else if (b[i][0] == 'R')
				printf("Player1\n");
			else if (b[i][0] == 'S')
				printf("Player2\n");
		}
	}
	return 0;
}
