#include<cstdio>
using namespace std;
int main() {
	int n,x,y;
	int c; 
	scanf("%d %d %d",&n,&x,&y);
	c=n-y/x;
	if(y%x==0) {
		printf("%d",c);
	} 
	else {
		c=c-1;
		printf("%d",c);
	}
	return 0;
}
