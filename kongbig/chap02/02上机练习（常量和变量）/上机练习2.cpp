/*
����ʽf(x) = ax^3 + bx^2 + cx + d
�������a��b��c��d��x������f(x)��ֵ��
����С�����7λ�� 
*/ 
#include<cstdio>
int main()
{
	double a, b, c, d, x, fx;
	printf("��ֱ�����a,b,c,d,x��ֵ���Կո�ֿ���\n");
	scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &x);
	fx = a * x * x * x + b * x * x + c * x + d;
	printf("f(x) = ax^3 + bx^2 + cx + d�Ľ��Ϊ��%.7lf", fx);
	return 0; 
}
