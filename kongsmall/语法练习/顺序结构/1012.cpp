#include<cstdio>
using namespace std;
int main()
{
	double x,a,b,c,d; 
	double f;
	scanf("%lf %lf %lf %lf %lf",&x,&a,&b,&c,&d);
	f = a*x*x*x + b*x*x + c*x + d;
	printf("%.7f",f);
	return 0;
	
 }   
