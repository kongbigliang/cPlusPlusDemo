#include<cstdio>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c&&a+c>b&&b+c>a)
	{
		printf("%s","yes");
	}
	else
	{
		printf("%s","no");
	}
	return 0;
 } 
