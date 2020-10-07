#include<cstdio>
using namespace std;
int main()
{
	int a,b;
	char c;
	scanf("%d %d %c",&a,&b,&c);
	if(c=='+')
	{ 
		printf("%d", a+b);
	}
	else if(c=='-')
	{
		printf("%d", a-b);
	}
	else if(c=='*')
	{
		printf("%d", a*b);
	}
	else if(c=='/')
	{
		if(b==0)
		{
			//记得加感叹号 
			printf("%s", "Divided by zero!");
		}
		else 
		{
			printf("%d", a/b);
		}
	}
	else
	{
		printf("%s", "Invalid operator!");
	}
	return 0;
}
