#include<cstdio>
using namespace std;
int mom,jj,cost,a,b,ans;
int main()
{
	for(int i=1;i<=12;++i)
	{
		scanf("%d",&cost);
		jj+=300;
		if(jj-cost<0)
		{
			printf("-%d",i);
			return 0;
		}
		jj-=cost;
		if(jj/100>=1)
		{
			a=jj/100;
			b=jj%100;
			mom+=a*100;
			jj-=a*100;
		}
	}
	ans=mom*1.2+jj;
	printf("%d",ans);
	return 0;
}
