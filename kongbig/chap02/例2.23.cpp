/*
求一元二次方程
x^2 + 3 * x + 2 = 0
的两个实数根。

分析：方程的系数是常数，分别用A、B、C表示，运用数学求方程的根，采取如下方法：
1、先求出d = B^2 - 4AC （求根公式中需要开方运算的那部分） 
2、再用求根公式算出x1、x2的值
3、输出x1、x2 
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











