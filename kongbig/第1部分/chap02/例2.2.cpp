/*
圆柱体的表面积
输入地面半径r和高h，输出圆柱体的表面积，保留3为小鼠，格式如下：
输入：3.5 9		输出：274.889

圆柱体表面积 = 上底面积 + 下底面积 + 侧面积
底面积=Πr平方		侧面积=2Πrh 
*/ 
#include<cstdio>		// 使用printf和scanf，需调用cstdio库
using namespace std;
int main()
{
	// 定义pi为双精度实型变量 
	const double pi = 3.1415926;
	//定义双精度实型，float为单精度实型
	double r,h,s1,s2,s;
	// r和h前的&符号不能漏掉，double型用%lf 
	scanf("%lf%lf", &r, &h); 
	// 计算底面积
	s1 = pi * r * r;
	// 计算侧面积
	s2 = 2 * pi * r;
	// 计算总面积
	s = s1 + s2;
	// 保留3位小数 
	printf("Area = %0.3lf\n", s);
	return 0; 
} 









