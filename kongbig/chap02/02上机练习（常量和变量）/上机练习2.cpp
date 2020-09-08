/*
多项式f(x) = ax^3 + bx^2 + cx + d
和输入的a，b，c，d，x，计算f(x)的值，
保留小数点后7位。 
*/ 
#include<cstdio>
int main()
{
	double a, b, c, d, x, fx;
	printf("请分别输入a,b,c,d,x的值，以空格分开：\n");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &x);
	fx = a * x * x * x + b * x * x + c * x + d;
	printf("f(x) = ax^3 + bx^2 + cx + d的结果为：%.7lf", fx);
	return 0; 
}
