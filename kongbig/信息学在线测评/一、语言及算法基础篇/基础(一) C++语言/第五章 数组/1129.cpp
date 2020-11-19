#include<cstdio>
int main()
{
	int sum = 0;
	char c;
	while ((c = getchar()) != '\n')
	{
		sum += (c >= '0' && c <= '9' ? 1 : 0);
	}
	printf("%d", sum);
	return 0;
}
