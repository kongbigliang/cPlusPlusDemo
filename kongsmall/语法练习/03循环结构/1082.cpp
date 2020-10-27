
#include<cstdio>
int main()
{
	int a,b,n,i,c;
	scanf("%d%d%d",&a,&b,&n);
	c=a;
	for(i=1;i<=n;i++)
	{
		c%=b;
		c*=10;
	}
	c/=b;
	printf("%d",c);
}

