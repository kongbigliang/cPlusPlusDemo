#include<cstdio>
using namespace std;
int main()
{
	int a, b, sum = 1;
	scanf("%d %d", &a, &b);
	for (int i = 1; i <= b; i++)
	{
		sum *= a;
		// 不停取余，防止超过int最大值 
		sum %= 7;
	}
	switch (sum)
	{
		case 1: 
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		default:
			printf("Sunday");
			break;
	}
	return 0;
}
