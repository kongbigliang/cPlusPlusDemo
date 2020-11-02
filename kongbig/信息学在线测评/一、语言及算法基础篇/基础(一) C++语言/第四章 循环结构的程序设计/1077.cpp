#include<cstdio>
using namespace std;
int main()
{
	int n, in, out = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		scanf("%d", &in);
		// Ç§
		int q = in / 1000;
		// °Ù
		int b = in / 100 % 10;
		// Ê®
		int s = in / 10 % 10;
		// ¸ö
		int g = in % 10;
		if (g - q - b - s > 0)
		{
			++out;
		}
	}
	printf("%d", out);
	return 0;
}
