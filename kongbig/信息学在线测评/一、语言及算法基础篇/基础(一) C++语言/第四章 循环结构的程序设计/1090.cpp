#include<cstdio>
using namespace std;
int main()
{
	int m, k, temp = 0;;
	scanf("%d %d", &m, &k);
	if (m % 19 == 0)
	{
		while (m != 0)
		{
			if(m % 10 == 3)
			{
				temp += 1;
			}
			m /= 10;
		}
		printf("%s", temp == k ? "YES" : "NO");
		return 0;
	}
	printf("NO");
	return 0;
}
