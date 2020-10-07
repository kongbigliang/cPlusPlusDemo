/*
等差数列求第n项的值 ： 
an=a1+(n-1)d
*/
#include<cstdio>
using namespace std;
int main()
{
   int a1,a2,n;
   int s;
   scanf("%d %d %d",&a1,&a2,&n);
   s=a1+(n-1)*(a2-a1);
   printf("%d",s);
   return 0;
}
