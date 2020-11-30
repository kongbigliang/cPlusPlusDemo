/*
海伦公式：√p(p-a)(p-b)(p-c)，其中p=(a+b+c)/2
利用三角形的三条边长来求三角形面积 
*/ 
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	float p = (a + b + c) / 2;
	// 根据p求面积，sqrt是开方函数 
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("%0.3f\n", s);
	return 0; 
}
