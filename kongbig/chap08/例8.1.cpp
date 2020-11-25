/*
输入两个不同的数，通过指针对两个数进行相加和相乘，并输出 
*/
#include<cstdio>
using namespace std;
int main()
{
	int a, b, s, t, *pa, *pb;
	pa = &a;
	pb = &b;
	a = 10;
	b = 20;
	s = *pa + *pb;
	t = *pa * *pb;
	printf("a = %d, b = %d\n", *pa, *pb);
	printf("s = %d, t = %d\n", s, t);
	return 0; 
}
