#include<cstdio>
using namespace std;
int main()
{
	int n,num[17][3];
	int j=0,y=0,t=0,sum=0;
	int i,z;
	scanf("%d",&n);
	// �� 
	for(i=0;i<n;i++)
	{
		// �� 
		for(z=0;z<3;z++)
		{
			// ���� 
			scanf("%d",&num[i][z]);
			// �������
			if(z==0)
			{
				j+=num[i][z];	
			}
			
			// ��������
			if(z==1)
			{
				y+=num[i][z];
			}
			// ͭ������
			if(z==2)
			{
				t+=num[i][z]; 	
			}
			// ����ͭ������ 
			sum+=num[i][z];
		}
	}
	printf("%d %d %d %d",j,y,t,sum);
	return 0;
 } 
