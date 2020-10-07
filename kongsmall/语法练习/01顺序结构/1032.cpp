#include<cstdio>
using namespace std;
const double PI = 3.1415926;
int main() {
	int h,r,n;
	double c;
	scanf("%d %d", &h, &r);
	c = 20 * 1000 / (PI * r * r * h); // 2.34»ò1.99 
	n = 20 * 1000 / (PI * r * r * h); // 2
	if (c>n) {
		n = n + 1;
		printf("%d",n);
	} else {
		printf("%d",n);
	}
	return 0;
}
