/*
��һԪ���η���
x^2 + 3 * x + 2 = 0
������ʵ������

���������̵�ϵ���ǳ������ֱ���A��B��C��ʾ��������ѧ�󷽳̵ĸ�����ȡ���·�����
1�������d = B^2 - 4AC �������ʽ����Ҫ����������ǲ��֣� 
2�����������ʽ���x1��x2��ֵ
3�����x1��x2 
*/
#include<cstdio>
#include<math.h>
#define A 1
#define B 3
#define C 2
int main()
{
	int d = B * B - 4 * A * C;
	float x1, x2;
	x1 = (-B + sqrt(d)) / (2 * A);
	x2 = (-B - sqrt(d)) / (2 * A);
	printf("x1=%-8.3fx2=%-8.3f\n", x1, x2);
	return 0;
}











