/*
输入圆的半径r，
输出圆的直径、周长和面积，保留小数点后4位
直径d = 2 * r;
周长c = 2 * PI * r;
面积s = PI * r * r; 
*/
#include<cstdio>
const double PI = 3.1415926;
int main()
{
	int r;
	double d, c, s;
	printf("请输入圆的半径r：\n");
	scanf("%d", &r);
	d = 2 * r;
	c = 2 * PI * r;
	s = PI * r * r;
	printf("直径d=%.4f\t周长c=%.4f\t面积s=%.4f", d, c, s); 
	return 0;
}
