#include<cstdio>
using namespace std;
int main()
{
	int n,age[100];
	double avrrage,sum=0;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&age[i]);
		sum+=age[i];
	}
	avrrage=sum/n;
	printf("%.2lf\n",avrrage);
	return 0; 
 } 
