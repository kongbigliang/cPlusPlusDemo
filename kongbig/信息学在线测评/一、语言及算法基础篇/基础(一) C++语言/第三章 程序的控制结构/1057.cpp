#include<cstdio>
using namespace std;
int main()
{
	int x, y;
	char c;
	scanf("%d %d %c", &x, &y, &c);
	switch (c)
	{
		case '+' :
			printf("%d", x + y);
			break;
		case '-' :
			printf("%d", x - y);
			break;
		case '*' :
			printf("%d", x * y);
			break;
		case '/' :
			if (y == 0)
			{
				printf("%s", "Divided by zero!");
				break;
			}
			printf("%d", x / y);
			break;
		default:
			printf("%s", "Invalid operator!");
			break;
	}
	return 0;
}
