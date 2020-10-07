#include<cstdio>
using namespace std;
int main()
{
	int n,num[17][3];
	int j=0,y=0,t=0,sum=0;
	int i,z;
	scanf("%d",&n);
	// 行 
	for(i=0;i<n;i++)
	{
		// 列 
		for(z=0;z<3;z++)
		{
			// 输入 
			scanf("%d",&num[i][z]);
			// 金的总数
			if(z==0)
			{
				j+=num[i][z];	
			}
			
			// 银的总数
			if(z==1)
			{
				y+=num[i][z];
			}
			// 铜的总数
			if(z==2)
			{
				t+=num[i][z]; 	
			}
			// 金银铜的总数 
			sum+=num[i][z];
		}
	}
	printf("%d %d %d %d",j,y,t,sum);
	return 0;
 } 
