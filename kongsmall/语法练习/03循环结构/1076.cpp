#include<cstdio>
using namespace std;
int main()
{
	int n,a,b;
	int longtime=0,temp=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d %d",&a,&b);	
		if(90<=a&&a<=140 && 60<=b&&b<=90)
		{
			temp+=1;
		}
		else
		{
			temp=0;
		}
		
		if(temp > longtime) {
			longtime = temp;
		}
	}
	printf("%d",longtime);
	return 0;
}
