/*
伪代码： 
if 被3 5 7整除
	printf 3 5 7
else if 被 3 5整除
	printf 3 5
else if 被 3 7整除
	printf 3 7
else if 被5 7整除
	printf 5 7
else if 被3整除
	printf 3
else if 被5整除
	printf 5
else if 被7整除
	printf 7
else 
	printf 'n'
*/
#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0 && n % 7 == 0)
	{
		printf("%d %d %d",3,5,7); 
	} 
	else if(n%3==0&&n%5==0)
	{
		printf("%d %d",3,5);
	}
	else if(n%3==0&&n%7==0)
	{
		printf("%d %d",3,7);
	} 
	else if(n%5==0&&n%7==0)
    {
	 	printf("%d %d",5,7);
	}
    else if(n%3==0)
	{
	 	printf("%d",3);
	}
	 else if(n%5==0)
	{
	 	printf("%d",5); 
	} 
	else if(n%7==0)
	{b
	 	printf("%d",7);
	}
	else
	{
		printf("%c",'n');
	}
}
