#include<cstdio>
using namespace std;
int main()
{
	int w,m;
	char c;
	scanf("%d %c",&w,&c);
	if(w<=1000&&c=='n')
	{
		printf("%d",8);
	}
	else if(w>1000&&c=='n')
	{
		if((w-1000)%500!=0)
		{ 
			int x=(w-1000)/500+1;
			m=8+x*4;
			printf("%d",m);
		} 
		else
		{
			int x=(w-1000)/500;
			m=8+x*4;
			printf("%d",m);
		}
	}
	else if(w<=1000&&c=='y')
	{
		printf("%d",13);
	}
	else if(w>1000&&c=='y')
	{
		if((w-1000)%500!=0)
		{ 
			int x=(w-1000)/500+1;
			m=8+x*4+5;
			printf("%d",m);
		}	 
		else
		{
			int x=(w-1000)/500;
			m=8+x*4+5;
			printf("%d",m);
		}
	}
	return 0;	
}
